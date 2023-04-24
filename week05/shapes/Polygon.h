

// Tells the compile not
//   to throw a hissy fit
//   if this header is included
//   more than one time.
//
// If you don't do this,
//   and this header gets included
//   more than once in a program,
//   the compiler will think that
//   you are re-defining Polygon
//   and will give a compile-time
//   error telling you that.
#pragma once

// Allows us to access the contents
//   defined in Shape.h
#include "Shape.h"

// We declare a new class called Polygon
class Polygon
//   and specify that every Polygon
//   *is a* Shape
: public Shape {

  // Anybody who has access
  //   to a Polygon object
  //   can call its num_sides() method.
 public:

  // virtual means that this method
  //    exists in theory,
  //    but not (yet) in practice.
  //
  // int is the return type
  //
  // num_sides is the name of the function
  //
  // () is the empty parameter list
  //
  // By marking this function const,
  //   we are making a binding promise
  //   to the compiler that calling this function
  //   will *not* change the object in any way.
  //
  // The = 0 tells the compiler that this function
  //    has no body.
  // The = 0, in conjunction with virtual,
  //   is what makes this class *abstract*   
  virtual int num_sides() const = 0;

  
  /*
  virtual int num_sides() const {
    return 7;
  }
  
  int arae() const override {
    return 175;
  }
  */
  
};
// End of class body.
//
// This must end in a semicolon.
