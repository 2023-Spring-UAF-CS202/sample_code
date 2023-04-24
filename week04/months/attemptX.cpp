#include <iostream>

using std::cout;
using std::cerr;
using std::endl;


// Creating a data structure to represent months of the year
//
//   Attempt 1:
//   ----------
//      Represent each month as a global variable
//
//
//   Problem #1: Using global variables
//   ----------------------------------
//      Representing important information as global variables
//         is generally considered poor practice.
//
int jan = 1;
int feb = 2;
int mar = 3;
int apr = 4;
int may = 5;
int jun = 6;
int jul = 7;
int aug = 8;
int sep = 9;
int oct = 10;
int nov = 11;
int dec = 12;


// Good news!
//
//   We solved Problem #0 from Attempt 0
//
//   Solved: Problem #0
//   ------------------
//      By creating global variables for each month,
//         we no longer have to remember whether our month numbering
//         starts at 0 (jan=0) or 1 (jan=1)


// Bad news!
//
//    Using global variables is generally a bad idea.


// Problem:
//
// Conceptually we are trying to represent a month,
//   but we're actually using an integer
//
void do_something(int month) {

  if (month < jan  or month > dec) {
    throw std::runtime_error("Invalid month: " + str(month));
  }
  
  switch (month) {
  case jan:
    cout << "January is cold!\n"; break;
  case feb:
    cout << "February is even colder!\n"; break;
  case mar:
    cout << "What is March like in Fairbanks?\n"; break;
  default:
    cout << "It's April or later.\n"; break;
  }
  
}

int main() {

  try {
  
    do_something(jan);

    // We also can't do anything to prevent the user
    //   from providing an integer that doesn't make any sense as a month,
    //   like this:
    do_something(-75);  // No month corresponds with the number -75
    
  } catch (const std::exception& e) {

    std::cerr << e.what();
    return 1;
    
  }
  
  return 0;
}
