#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;


//
// using cstring_array = char * *;

// Unfortunately, main takes old-school C-style arguments
//
// The first parameter is an int that specifies the number of parameters
//
// The second parameter is an array of C-style strings
//
// A C-style string is a char *,
//   which is essentially equivalent to an array of characters.
//
// The type char * * is a pointer to a pointer of characters,
//   which is essentially equivalent to an array of C-style string.s
// 
int main(int argc, char * * argv) {

  // The value argv[0] holds the name of the program
  string program_name{argv[0]};

  // The remaining arguments are in argv[1] through argv[argc - 1]
  //
  // Initialize a vector of strings called args,
  //   starting with the element at argv[1],
  //   and ending with the last element in argv
  //
  // Use of & here is necessary, and
  //   indicates that we are making a reference
  //   rather than making a copy.
  /*
  vector<string> args;
  for (int i=1; i < argc; i+=1) {
    string arg{argv[i]};
    args.push_back(arg);
  }
  */

  // char * * argv
  // char * argv[1]
  vector<string> args{argv+1, argv+argc};
  //  vector<string> args{&argv[1], &argv[argc]};

  // Print the name of the program
  cout << program_name << " ";

  // Print each argument
  for (string arg : args) {
    cout << arg << " ";
  }

  // Print a newline
  cout << endl;
  
  return 0;
}
