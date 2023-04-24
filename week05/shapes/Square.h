#pragma once

#include "Rectangle.h"


class Square : public Rectangle {

 public:

 Square(int w)
   : Rectangle{w,w}
  {
    // This space intentionally left blank
  }

  void resize(int new_width);
  
};

