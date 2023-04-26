#include "Greeting.h"
#include "Hello.h"
#include "Hola.h"

void say_hi(Greeting& greeting) {

  greeting.greet();

}


int main() {

  Hello hello;
  Hola hola;

  say_hi(hello);
  say_hi(hola);

  return 0;
}
