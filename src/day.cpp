#include "../header/day.h"
using namespace std;
Day::Day()
 {
    vector<Task> tasks;
    color = 0;
    name = "";
 }  
Day::Day(vector<Task*> tasks, int c, string n)
 {
    tasksVec = tasks;
    color = c;
    name = n;

 }

void Day::addTask(Task *t) {
   tasksVec.push_back(t);
}
// void Day::checkTimeConflict(Time T)
// {
    
// }
void Day::printTasks() {
   int i = 0;
   for (i = 0; i < tasksVec.size(); ++i) {
      cout << tasksVec.at(i)->getStartTime().getTime()<< " - " << tasksVec.at(i)->getDescription() << endl;
   }
}
// void Day::findColor();
// void Day::printMenu(int taskNum);
// void Day::setName(string);
