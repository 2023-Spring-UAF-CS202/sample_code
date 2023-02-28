#include <iostream>
#include <iomanip>  // Provides setw

using std::setw;

using std::cout;
using std::endl;

using std::boolalpha;
using std::noboolalpha;

using std::fixed;
using std::scientific;

int main() {

  cout << boolalpha;

  cout << (1==2) << endl;

  cout << (10==10) << endl;

  cout << noboolalpha;

  cout << false << endl;
  cout << true << endl;

  cout << scientific;
  cout << 100000318000000.0 << endl;

  cout << std::fixed;
  cout << std::setprecision(2);

  cout << 3.141595 << endl;
  
  return 0;
}
