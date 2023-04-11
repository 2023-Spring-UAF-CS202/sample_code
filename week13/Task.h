#pragma once

#include <string>


class Task {

 public:

  Task(std::string message);
  ~Task();

  void addTask(std::string message);
  
  std::string message;
  Task* nextTask;

};
