#include "Rectangle.h"

int Rectangle::getWidth() const {
  return width;
}


int Rectangle::getHeight() const {
  return height;
}

int Rectangle::area() const override {
  return width * height;
}

int Rectangle::num_sides() const override {
  return 4;
}
