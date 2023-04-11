#pragma once

#include <string>


class Task {

 public:

  Task(std::string message);
  ~Task();

  std::string message;
  Task* nextTask;

};
