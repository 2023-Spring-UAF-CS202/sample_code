#pragma once  // This is a special pre-processor directive.
              //
              // Its job is to prevent this header from being included in your code multiple times.
              //
              // See https://en.wikipedia.org/wiki/Pragma_once


// This includes the string header
//
// This makes the std::string class available
#include <string>


// Note: I am *not* doing `using namespace std` here
//
// It is best practice to *not* use `using` commands in header files,
//
//   because doing so can pollute the namespace of code that includes this header.


// This declares a custom type called HotAirBalloon
//
class HotAirBalloon {

 public:

  // This declares a default constructor
  HotAirBalloon();

  // This declares a constuctor that takes a parameter from the user
  HotAirBalloon(std::string color);


  // These are getter member functions
  double getAltitude();
  std::string getColor();

  // These are setter member functions
  void setAltitude(double altitude);
  void setColor(std::string color);

  
 private:  

  // These are private member variables.
  //
  // Private means that these variables are accessible *only* within the definition of the class and its member functions.
  //
  // It's good practice to initialize these in the constructor body rather than here.
  
  std::string color;  // Some people prefer the style _color for private variable names.
  double altitude;    // Personally, I don't, but if you want to that's absolutely OK.

};
//
// Note that a semicolon is needed after the closing curly brace of the class declaration
