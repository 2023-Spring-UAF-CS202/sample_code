#include "Task.h"


int main() {

  Task firstTask("Open the door");

  /*
  firstTask.message is "Open the door"
  firstTask.nextTask is nullptr
  */
  
  firstTask.addTask("Look for monsters");

  cout << (*(firsttask.nextTask)).message << endl;

  cout firstTask.nextTask->message
  

  /*
  firstTask.message is "Open the door"
  firstTask.nextTask is 758

  at 758
  anotherTask.message is "Look for monsters"
  anotherTask.nextTask is nullptr
  */

  
  return 0;
}
