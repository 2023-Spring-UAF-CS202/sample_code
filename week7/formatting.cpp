#include <iostream>

using std::cout;
using std::endl;

using std::boolalpha;
using std::noboolalpha;

int main() {

  cout << boolalpha;

  cout << (1==2) << endl;

  cout << (10==10) << endl;

  cout << noboolalpha;

  cout << false << endl;
  cout << true << endl;
  
  return 0;
}
