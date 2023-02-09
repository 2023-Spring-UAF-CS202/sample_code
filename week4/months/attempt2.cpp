#include <iostream>

using std::cout;
using std::cerr;
using std::endl;


// Creating a data structure to represent months of the year
//
//   Attempt 2:
//   ----------
//      Put the global variables in a namespace.
//
namespace month {
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
}

// Good news!
//
//   We solved Problem #1 from Attempt 1
//
//   Solved: Problem #1
//   ------------------
//      By putting the variables in a namespace,
//         we are following better practice than using bare global variables.


// Bad news!
//
//   A user could change the value of jan from 1 to 125.
//
//   The compiler notices this and as a result, this code won't compile.
//
//
//   Problem #2: Values can be changed
//   ----------------------------------
//      An ignorant or malicious user could change the values of the months.
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

  
  // Bad news: changing the value of February is totally possible
  //
  month::feb = 7000;

  do_something(month::feb);

  
  return 0;
}
