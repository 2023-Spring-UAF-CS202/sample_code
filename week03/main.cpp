#include <iostream>
#include <string>

#include "HotAirBalloon.h"


int main() {

  std::cout << "Welcome to Fairbanks hot air balloon tours!" << std::endl;

  std::cout << "What color balloon would you like to fly in today? ";
  std::string color;
  std::cin >> color;
  
  HotAirBalloon aircraft{color};
  
  std::cout << "Launching " << aircraft.getColor() << " balloon!" << std::endl;

  double altitude;
  std::cout << "How high up would you like to go (in feet): ";
  std::cin >> altitude;

  std::cout << "Aye, aye." << std::endl;

  aircraft.setAltitude(altitude);

  std::cout << "We have now reached an altitude of " << aircraft.getAltitude() << " feet" << std::endl;
  
  return 0;
}
