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

  for (const auto& [grade, count] : hw01_grades) {

    cout << grade << ": " << count << endl;
    
  }
  

  /* C++ 11 allows the following:

  for (const auto& key_value_pair : hw01_grades) {
    std::cout << key_value_pair.first << ": " << key_value_pair.second << endl;
  }

  */
  
  /* OLD SCHOOL WAY:

  for (map<string, int>::const_iterator it = hw01_grades.begin();
       it != hw01_grades.end(); it++) {

    std::cout << it->first << ": " << it->second << endl;
  }
 
  */
  
  return 0;
}
