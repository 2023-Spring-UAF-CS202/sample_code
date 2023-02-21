#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;


int main(int argc, char * * argv) {

  string program_name{argv[0]};
  vector<string> args{&argv[1], &argv[argc]};

  if (args.size() > 1) {
    ifstream in{args[0]};
    ofstream out{args[1]};
    
    string token;
    while (in >> token and out) {
      out << token << endl;
    }
  }
  
  return 0;
}
