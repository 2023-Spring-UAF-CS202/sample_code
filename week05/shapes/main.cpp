#include <iostream>

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"

using std::cout;
using std::endl;

void do_something(Shape& s) {
  cout << "The area of this shape is " << s.area() << endl;
}

int main() {

  Rectangle r{10,7};

  Square s{5};

  do_something(r);

  do_something(s);
  
  cout << "r: " << r.getWidth() << "," << r.getHeight() << " area=" << r.area() << " has " << r.num_sides() << " sides" << endl;

  cout << "\n" << r << "\n";


  cout << "s: " << s.getWidth() << "," << s.getHeight() << " area=" << s.area() << " has " << s.num_sides() << " sides " << endl;

  cout << "\n" << s << "\n";
  
}
