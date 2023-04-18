#include <functional>
#include <iostream>
#include <vector>

class Demo {

public:
  
  Demo() : numbers{1,2,3,4,5,6}
  {

  }

  void processEachElement(std::function<void(int)> someFunction) {
    for (int i : numbers) {
      someFunction(i);
    }
  }

private:

  std::vector<int> numbers;

};


void evenPrimeNumbers(int i) {
  if (i == 2) {
    std::cout << i << " is an even prime number" << std::endl;
  }
}


int main() {

  Demo demo;

  demo.processEachElement(evenPrimeNumbers);

  return 0;
}
