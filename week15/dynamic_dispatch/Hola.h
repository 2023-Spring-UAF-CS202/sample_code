#pragma once

#include "Greeting.h"
#include <iostream>

class Hola : public Greeting {
public:
  void greet() override {
    std::cout << "Hola! Como estas?" << std::endl;
  }

};
