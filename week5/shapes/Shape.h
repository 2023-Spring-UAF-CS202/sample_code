#pragma once


// This is an Abstract Base Class
//
// In other words, the following code does *not* compile:
//
// Shape s1;
//
// Shape s2{};

class Shape {

public:
  
  virtual int area() const = 0;

  
};
