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


std::ostream& operator<<(std::ostream& os, Month month) {
  switch (month) {
  case Month::jan: os << "January"; break;
  case Month::feb: os << "February"; break;
  case Month::mar: os << "March"; break;
  case Month::apr: os << "April"; break;
  case Month::may: os << "May"; break;
  case Month::jun: os << "June"; break;
  case Month::jul: os << "July"; break;
  case Month::aug: os << "August"; break;
  case Month::sep: os << "September"; break;
  case Month::oct: os << "October"; break;
  case Month::nov: os << "November"; break;
  case Month::dec: os << "December"; break;
  default: os.setstate(std::ios_base::failbit); throw std::runtime_error("Invalid month: " + std::to_string(int(month)));
  }

  return os;
}
  

void do_something(Month month) {
  
  switch (month) {
  case Month::jan:
    cout << month << " is cold!\n"; break;
  case Month::feb:
    cout << month << " is even colder!\n"; break;
  case Month::mar:
    cout << "What is " << month << " like in Fairbanks?\n"; break;
  default:
    cout << "It's " << month << "\n"; break;
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

