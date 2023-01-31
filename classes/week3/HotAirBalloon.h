#pragma once

#include <string>


class HotAirBalloon {

 public:

  HotAirBalloon();

  HotAirBalloon(std::string color);

  double getAltitude();
  std::string getColor();
  
  void setAltitude(double altitude);
  void setColor(std::string color);

 private:

  std::string color;
  double altitude;

};

