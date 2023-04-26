#pragma once
#include "Greeting.h"
#include <iostream>


class Hello : public Greeting {
public:
  void greet() override {
    std::cout << "Hello!" << std::endl;
  }

};
