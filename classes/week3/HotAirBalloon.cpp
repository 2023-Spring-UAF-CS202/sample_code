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
  HotAirBalloon::altitude = altitude;
}

void HotAirBalloon::setColor(std::string updatedColor)
{
  color = updatedColor;
}



