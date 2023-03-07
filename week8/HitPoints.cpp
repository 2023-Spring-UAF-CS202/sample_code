#include <iostream>  // Makes available std::cout and std::endl
#include <ostream>   // Makes available std::ostream

using std::cout;     // Allows us to say cout instead of std::cout
using std::endl;     // Allows us to say endl instead of std::endl


// Declare a custom user-defined type called HitPoints
class HitPoints {

public:

  // Define a constructor that accepts an integer
  HitPoints(int max_points)
    : value{max_points}      // Initialize the value member variable
    , max_value{max_points}  // Initialize the max_points member variable
  {
    // This space intentionally left blank
  }  

  // Implement a getter function for the value member variable
  int getCurrent() const { // Since we're not changing anything, mark it as const
    return value;
  }

  // Implement another getter function
  int getMax() const {
    return max_value;
  }

  // The following line marks this particular external function as a friend
  //   Be careful! Friends have access to your private data!
  friend std::ostream& operator<<(std::ostream& my_cool_stream, const HitPoints& hp);

  // Pre-increment operator that allows us to say --hp
  HitPoints& operator--() {
    value -= 1;
    return *this;
  }

  // Post-increment operator that allows us to say hp--
  HitPoints operator--(int) // Why does this function take an int? We don't know!
    {
      // The following is weird,
      //   but that's because the operator itself is weird
      HitPoints copy_of_this = *this; // Make a copy of the current object
      value -= 1;                     // Change this object's value
      return copy_of_this;            // Return the copy that contains the old value
    }

  // Every object has an implicit pointer to itself called this:
  //
  // We don't actually write the next line. It's essentially provided for us:
  // HitPoints * this;
  
  bool closeToDeath() {
    // We can use the -> notation instead of a dot
    //   to access members of the object that a pointer is referring to
    if (this->value < 3) {
      return true;
    } else {
      return false;
    }
  }
  
private:
  int value;
  int max_value;

};


// Overload the << operator
std::ostream& operator<<(std::ostream& my_cool_stream, const HitPoints& hp) {

  my_cool_stream << hp.value << "/" << hp.max_value;

  return my_cool_stream;

}


int main() {

  HitPoints h{10};

  cout << h-- << endl;
  /*  
      Doing the above is like doing this:

  HitPoints copy{h};
  h.points = h.points - 1;
  cout << copy << endl;
  */


  cout << --h << endl;
  
  return 0;
}
