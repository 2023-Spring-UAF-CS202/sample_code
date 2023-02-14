#include <iostream>

using std::cout;

// Attempt 0:
// int jan = 1;
// int feb = 2;

// Attempt 1
// namespace month {
//  constexpr int jan = 1;
//  constexpr int feb = 2;
//
//  constexpr int dec = 12;
// }

/*
Attempt 2:
enum Month {
	    jan, feb, mar, apr, may, jun,
	    jul, aug, sep, oct, nov, dec
};
*/


/* Attempt 3

class Month {

public:
  
  Month(int n) : numeric_value{n}
  {
    
  }

private:
  int numeric_value;  
};

const Month jan{1};
*/

// Attempt 4
enum class Month {
	    jan, feb, mar, apr, may, jun,
	    jul, aug, sep, oct, nov, dec		
};


void do_something(Month month) {

  //  cout << month.name << " is cold";
  
  if (month == Month::jan) {
    cout << "January is cold!";
  }

  switch (month) {

  case Month::jan:
    cout << "January is cold\n";
    break;

    
  }
  
  /*
  switch (month.numeric_value) {
  case jan.numeric_value:
    cout << "January is cold";
    break;

  }
  */
}

int main() {

  do_something(Month(-75));
  
  return 0;
}
