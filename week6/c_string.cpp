#include <iostream>

using std::cout;
using std::endl;


int main() { //(int argc, c_string_array argv) {

  //  auto mystery_variable{"Hello"};

  const char * mystery_variable = "Hello";

  const char * something_else = mystery_variable + 4;
  
  const char mystery_char = *something_else;

  cout << mystery_variable[4] << endl;

  cout << *(mystery_variable + 4) << endl;
  
  cout << mystery_char << endl;
  
  // A location in memory is reserved that is big enough for exactly 5 characters
  //
  // Location in memory, let's call it starting_address
  //*
  // 0: 'H'
  // 1: 'e'
  // 2: 'l'
  // 3: 'l'
  // 4: 'o'
  // 5: '\0'
  

  
  return 0;
}

