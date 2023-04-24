#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;


int main(int argc, char * * argv) {

  string program_name{argv[0]};
  vector<string> args{&argv[1], &argv[argc]};

  if (args.size() != 2) {

    cerr << "Usage: " << program_name << " input_file output_file" << endl;
    
  } else {
    
    ifstream in{args[0]};

    if (in.fail()) {
      cerr << "Error opening input file " << args[0] << endl;
      return -1;
    }

    ofstream out{args[1]};
    if (out.fail()) {
      cerr << "Error opening output file " << args[1] << endl;
      return -2;
    }
    
    string token;
    while (in >> token and out) {
      out << token << endl;
    }
  }
  
  return 0;
}
