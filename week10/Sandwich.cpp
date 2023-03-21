#include <iostream>
#include <vector>
#include <string>

enum class Layer {
		  bread,
		    cheese,
		    peanut_butter,
		    jam,
		    tofurky

};

class Sandwich {

public:
  
  Sandwich() {
    // This space intentionally left blank
  }

  void add_layer(Layer layer) {
    this->layers.push_back(layer);
  }

  int size() const {
    return this->layers.size();
  }

private:

  std::vector<Layer> layers;

};


int main() {

  std::cout << "Let's build a sandwich!" << std::endl;

  std::string prompt{"0: bread\n1:cheese\n2:peanut_butter\n3:jam\n4:tofurkey\n"};
  int selection;

  Sandwich sandwich;
  
  while (std::cout << prompt, std::cin >> selection) {
    Layer layer{selection};
    sandwich.add_layer(layer);
  }

  std::cout << "Sandwich has " << sandwich.size() << " layers\n";

  return 0;
}
