#include <iostream>

using std::cout;
using std::cerr;
using std::endl;


//   Attempt 4:
//   ----------
//      Use enum instead of namespace and constexpr
//
enum month {
	    jan, feb, mar, apr, may, jun,
	    jul, aug, sep, oct, nov, dec
};

  
// Bad news!
//
//   We're still using int to represent month.
//
//   A user could supply an invalid int, and we would have to check for that at runtime.
//
//
//   Problem #4: Type mismatch 
//   ----------------------------------
//      An ignorant or malicious user could provide an invalid integer value
//


void do_something(int month) {

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

  do_something(month::jan);

  // This function call gives a misleading incorrect answer
  do_something(-75);
  
  return 0;
}
