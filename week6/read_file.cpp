#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;


int main(int argc, char * * argv) {

  string program_name{argv[0]};
  vector<string> args{&argv[1], &argv[argc]};

  if (args.size() > 0) {
    ifstream in{args[0]};

    string token;
    while (in >> token) {
      cout << token << endl;
    }
  }
  
  return 0;
}
