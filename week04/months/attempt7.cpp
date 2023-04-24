#include <iostream>
#include <string>
#include <stdexcept>

using std::cout;
using std::cerr;
using std::endl;


enum class Month {
	    jan, feb, mar, apr, may, jun,
	    jul, aug, sep, oct, nov, dec
};

  

void do_something(Month m) {
  
  switch (m) {
  case Month::jan:
    cout << "January is cold!\n"; break;
  case Month::feb:
    cout << "February is even colder!\n"; break;
  case Month::mar:
    cout << "What is March like in Fairbanks?\n"; break;
  default:
    cout << "It's April or later.\n"; break;
  }
  
}

int main() {

  try {
  
    do_something(Month::jan);

    do_something(Month{-75});

  } catch (const std::runtime_error& e) {

    std::cerr << e.what() << std::endl;

  }
    
  return 0;
}

