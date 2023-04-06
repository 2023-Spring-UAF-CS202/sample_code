#include <iostream>

using std::cout;
using std::endl;

int x{17}; // This is a global variable
           // It is in scope throughout the entire program

int main() {

  cout << x << endl;; // x is in scope
  
  // cout << y; // This is an error because y is not yet in scope
  
  int y{42}; // y is now in scope
             //   from here to the end of the curly braces


  cout << y << endl;  // This is fine. y is now in scope

  return 0;
}
