#include <map>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::map;


int main() {

  map<string, int> hw01_grades {
				  {"A", 8},
				  {"B", 5},
				  {"C", 0},
				  {"D", 3},
				  {"F", 5}
  };

  cout << "There are " << hw01_grades.size() << " elements " << endl;

  
  return 0;
}