#pragma once

#include <iostream>

#include "Shape.h"

class Rectangle : public Shape {

 public:

 Rectangle(int w, int h)
   : width{w}, height{h}
  {
    // This space intentionally left blank
  }

  int getWidth() const {
    return width;
  }

  int getHeight() const {
    return height;
  }

  int area() const override {
    return width * height;
  }
  
 protected:

  int width;
  int height;
  
};


std::ostream& operator<<(std::ostream& os, const Rectangle& r) {
  for (int row{0}; row<r.getHeight(); ++row) {
    for (int col{0}; col<r.getWidth(); ++col) {
      os << "*";
    }
    os << "\n";
  }

  return os;
}
