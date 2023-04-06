#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

int x{17}; // This is a global variable
           // It is in scope throughout the entire program

class Demo {
public:

  Demo(int v) : value{v}
  {
    cerr << "Running constructor Demo(" << value << ")" << endl;
  }

  Demo(const Demo& other) : value{other.value}
  {
    cerr << "Running copy constructor for Demo with value " << value << endl;
  }
  
  // destructor
  ~Demo() {
    cerr << "Running destructor ~Demo() for Demo object with value " << value << endl;
  }

  
  int getValue() const {
    return value;  // value *is* in scope
  }
  
private:
  int value;  // in scope anywhere in this class
};

int cubed(Demo& d) {
  cerr << "Runinng cubed(" << d.getValue() << ")" << endl; 
  int i = d.getValue();
  return i*i*i;
}


int main() {

  cout << x << endl;; // x is in scope
  
  // cout << y; // This is an error because y is not yet in scope
  
  Demo y{10}; // y is now in scope
             //   from here to the end of the curly braces

  
  // passing by value
  cout << cubed(y) << endl;  // This is fine. y is now in scope
  
  return 0;
}
