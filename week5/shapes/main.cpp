#include <iostream>

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"

using std::cout;
using std::endl;



int main() {

  const Rectangle r{10,7};

  Square s{5};

  cout << "r: " << r.getWidth() << "," << r.getHeight() << " area=" << r.area() << " has " << r.num_sides() << " sides" << endl;

  cout << "\n" << r << "\n";


  cout << "s: " << s.getWidth() << "," << s.getHeight() << " area=" << s.area() << " has " << s.num_sides() << " sides " << endl;

  cout << "\n" << s << "\n";
  
}
