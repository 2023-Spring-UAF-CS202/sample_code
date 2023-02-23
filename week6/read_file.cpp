#include <iostream>
#include <fstream>  // provides std::ifstream and std::ofstream
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

// $ ./read_file a b c d
//
// program_name will be "./read_file"
//
// args[0] will be "a"
// args[1] will be "b"
// args[2] will be "c"
// args[3] will be "d"
int main(int argc, char * * argv) {

  string program_name{argv[0]};
  vector<string> args{argv+1, argv+argc};

  if (args.size() != 1) {

    cerr << "Usage: " << program_name << " file.txt" << endl;
    
  } else {
    
    ifstream in{args[0]};

    if (in.fail()) {
      cerr << "Error opening file " << args[0] << endl;
      return -1;
    }
    
    int i;
    while (in >> i) {
      cout << i << endl;
    }
  }
  
  return 0;
}
