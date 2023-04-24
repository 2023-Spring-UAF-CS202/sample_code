
/*
 ----------------------------
 |  code (binary program)   |
 ----------------------------
 |  static global variables |
 ----------------------------
 | (main's local variable)  |
 | - - - - - - - - - - - -  |
 | (other function's locals)|
 | - - - - - - - - - - - -  | 
 |       stack              |
 |                          |
 ----------------------------
 |     free store (heap)    |


 */


class Student {

public:

  Student()
    : days_needed{512},
      success{new bool[days_needed]},
      days_of_success_so_far{0}
  {
    for (int i{0}; i<days_needed; i+=1) {
      success[i] = false;
    }
  }

  ~Student() {
    delete[] success;
  }
  
  bool recordSuccess() {
    if (days_of_success_so_far < days_needed) {
      success[days_of_success_so_far] = true;
      days_of_success_so_far += 1;
    }

    if (days_of_success_so_far == days_needed) {
      return true;
    } else {
      return false;
    }
  }
  
private:

  bool* success;

  int days_of_success_so_far;

  int days_needed;
  
};


int main() {

  //  auto bob = new Student;


  
  while (true) {

    Student bob;

    for (int x{0}; x<10; x+=1) {


      
    }

  }
}
