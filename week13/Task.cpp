#include "Task.h"
#include <iostream>

Task::Task(std::string m)
  : message{m}
  , nextTask{nullptr}
{
  std::cerr << "Called Task(" << m << ")" << std::endl;
}


Task::~Task() {
  std::cerr << "Called Task destructor" << std::endl;
}


