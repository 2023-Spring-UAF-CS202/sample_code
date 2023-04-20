#include <iostream>

using std::cout;
using std::endl;


class Animal {
  public:
    virtual void speak() = 0;
};

class Dog : public Animal {
  public:
    void speak() override {
      cout << "Bark bark!" << endl;
    }
};

class Cat : public Animal {
  
  public:

   // Automatically created by the constructor if we don't
  // Cat() { }
  //~Cat() { }
  //Cat(const Cat& other) { }

  
    void speak() override {
      cout << "Meow!" << endl;
    }
};
/*
void speakTo(Cat animal) {
    animal.speak();
}

void speakTo(Dog animal) {
  animal.speak();
}
*/

void speakTo(Animal& animal) {
  animal.speak();
}

int main() {

  Cat garfield;
  Dog odie;

  speakTo(garfield);
  speakTo(odie);

  return 0;
}
