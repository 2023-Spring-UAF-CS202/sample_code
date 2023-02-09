#include <iostream>

using std::cout;


// Creating a data structure to represent months of the year
//
//   Attempt 0:
//   ----------
//      Use int to represent each month
//
//
//   Problem #0
//   ------------------
//      Users have to know (and remember) what number corresponds with what month.
//      There's no sure way to know whether January is represented by 0 or by 1,
//         and likewise whether December is represented by 11 or by 12.


void do_something(int month) {
  
  switch (month) {
  case 0:
    cout << "January is cold!\n"; break;
  case 1:
    cout << "February is even colder!\n"; break;
  case 2:
    cout << "What is March like in Fairbanks?\n"; break;
  default:
    cout << "It's April or later.\n"; break;
  }
  
}

int main() {

  do_something(0); // Problem: I have to know that 0 means January
  
  return 0;
}
