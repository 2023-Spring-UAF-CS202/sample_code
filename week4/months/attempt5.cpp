#include <iostream>
#include <string>
#include <stdexcept>

using std::cout;
using std::cerr;
using std::endl;


enum month {
	    jan, feb, mar, apr, may, jun,
	    jul, aug, sep, oct, nov, dec
};

  

void do_something(int month) {

  //   Attempt 5:
  //   ----------
  //      Add runtime check for invalid integer values
  //
  if (month < month::jan or month > month::dec) {
    throw std::runtime_error("Invalid value for month: " + std::to_string(month));
  }  
  
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

  try {
  
    do_something(month::jan);

    do_something(-75);

  } catch (const std::runtime_error& e) {

    std::cerr << e.what() << std::endl;

  }
    
  return 0;
}

//   Problem #5: Reliance on runtime error checking
//   ----------------------------------
//     We won't find out about invalid integer values until runtime.   
//
