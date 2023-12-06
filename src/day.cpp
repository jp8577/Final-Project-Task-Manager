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
// void Day::findColor();
// void Day::printMenu(int taskNum);
// void Day::setName(string);
