#include "../header/day.h"
using namespace std;
Day::Day()
 {
   tasks = new vector<Task>();
    color = 0;
    name = "";
 }  

Day::Day(vector<Task> t, int c, string n)
 {
    tasksVec = tasks;
    color = c;
    name = n;

 }

void Day::addTask(Task *t) {
   tasksVec.push_back(t);
}
bool Day::checkTimeConflict(Task T1, Task T2)
{
   if(checkConflict(T1,T2))
   {
      return true;
   }
   else if(checkConflict(T2,T1)) //checks the reverse if theres conflict other way around
   {
      return true;
   }
   else 
   {
      return false;
   }
    
}

void Day::findColor() {

}
void Day::printMenu(int taskNum) {

}
void Day::setName(string) {

}

bool Day::checkConflict(Task t1, Task t2 )
{
   Time tempStart = T1.getStartTime();
   Time tempEnd = T1.getEndTime();
   Time intersect = T2.getStartTime();
   intersect.addMin();
   if(T1.getStartTime() == t2.getStartTime() || t1.getEndTime() == t2.getEndTime())
      retrun true; //if they are on the same time period
   while (tempStart != tempEnd)
   {
      if(tempStart == intersect)
      {
         return true;
      }
      tempStart.addMin();
   }
   return false;
}
void Day::findColor();
void Day::setName(string);
