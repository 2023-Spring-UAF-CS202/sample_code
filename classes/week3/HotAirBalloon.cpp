#include "HotAirBalloon.h"


HotAirBalloon::HotAirBalloon()
  : color("red")
  , altitude(0.0)
{
  // This space intentionally left blank
}

HotAirBalloon::HotAirBalloon(std::string color)
  : color(color)
  , altitude(0.0)
{
  // This space intentionally left blank
}

double HotAirBalloon::getAltitude()
{
  return altitude;
}

std::string HotAirBalloon::getColor()
{
  return color;
}

void HotAirBalloon::setAltitude(double altitude)
{
  // The following two lines do exactly the same thing.
  //
  // I am listing them both to show you that they both are legal C++ code, but in real code you wouldn't use both.
  
  HotAirBalloon::altitude = altitude;  // This is one way of disambiguating when a local variable and a member variable have the same name

  this->altitude = altitude;           // This is another way
}

void HotAirBalloon::setColor(std::string updatedColor)
{
  color = updatedColor;                // The other option is to use a different name for the local variable
}



