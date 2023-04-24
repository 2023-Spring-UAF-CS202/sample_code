#include <iostream>

using std::endl;
using std::cout;

// + - * / % & | && || [] () ++ -- ! ~ - > < <= >= = == << >> += -= *= /= 

int operator++(int& x) {

  int y{x};

  x += 1;

  return y;
  
}

int main() {

  int c{0};
  /*
  string first, middle, last;

  cin >> first >> middle >> last;

  operator>>(cin, first);  // cin gets returned

  operator>>(
	     operator>>(
			operator>>(cin, first),
			middle),
	     last);
  
  cin >> first, middle, last;

  cin >> first;
  middle;
  last;
  */

  for (int z{0}; z < 10; z+=1) {

  }
  
  
  cout << plusplus(c) << endl; // Prints 0

  cout << ++c << endl; // Prints 2

  //  cout << c+=1 << endl; // Gives a syntax error
  
}
