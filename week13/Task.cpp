#include "Task.h"
#include <iostream>

Task::Task(std::string m)
  : message{m}
  , nextTask{nullptr}
{
  std::cerr << "Called Task(" << m << ")" << std::endl;
}


Task::~Task() {
  std::cerr << "Calling Task destructor" << std::endl;

  delete nextTask; // delete the memory pointed to by nextTask

  // delete nextTask; // DO NOT DO THIS
  
  std::cerr << "Called Task destructor" << std::endl;
}

void Task::addTask(std::string message) {

  nextTask = new Task{message};

}






