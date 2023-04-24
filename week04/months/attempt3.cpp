#include <iostream>

using std::cout;
using std::cerr;
using std::endl;


// Creating a data structure to represent months of the year
//
//   Attempt 3:
//   ----------
//      Make the variables constexpr
//
namespace month {
  constexpr int jan = 1;
  constexpr int feb = 2;
  constexpr int mar = 3;
  constexpr int apr = 4;
  constexpr int may = 5;
  constexpr int jun = 6;
  constexpr int jul = 7;
  constexpr int aug = 8;
  constexpr int sep = 9;
  constexpr int oct = 10;
  constexpr int nov = 11;
  constexpr int dec = 12;
}

// Good news!
//
//   We solved Problem #2 from Attempt 1
//
//   Solved: Problem #2
//   ------------------
//      By making the variables constexpr, we can safely use them.


// Bad news!
//
//    By using namespace and constexpr in this way,
//      we have essentially re-invented the idea of enums.

//
//
//   Problem #3: We're ignoring a useful language feature
//   ----------------------------------
//      We've essentially re-invented enum
//


void do_something(int month) {

  switch (month) {
  case month::jan:
    cout << "January is cold!\n"; break;
  case month::feb:
    cout << "February is even colder!\n"; break;
  case month::mar:
    cout << "What is March like in Fairbanks?\n"; break;
  default:
    cout << "It's April or later.\n"; break;
  }
  
}

int main() {

  do_something(month::jan);

  do_something(-75);
  
  return 0;
}
