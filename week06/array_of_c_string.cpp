#include <iostream>

using std::cout;
using std::endl;


// ./array_of_c_strings hi yo
//
// argv[0] is "./array_of_c_strings"
//
// argv[1] is "hi"
// argv[1][0] is 'h'
// argv[1][1] is 'i'
// argv[1][2] is 0
//
// argv[2] is "yo"
int main(int argc, char * * argv) {

  // argv is a number that represents a location in memory
  //
  // The element at argv[0] is a char * that points to the first C-style string
  //
  // The element at argv[argc - 1 ] is a char * that points to the last C-style string 
  
  //  const char * a_string = "hi";
  //const char * b_string = "yo";

  for (int i{0}; i < argc; i+=1) {
  
    cout << "argv[" << i << "] is " << argv[i] << endl;
    
  }
  
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

