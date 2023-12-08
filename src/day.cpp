#include "../header/day.h"
using namespace std;
Day::Day()
 {
    name = "";
 }  

Day::Day(string n)
 {
   name = n;
 }

bool Day::addTask(Task *t) {
   int count = 0;
   Task *temp;
   while(count < tasksVec.size())
   {
      temp = tasksVec.at(count);
      if (checkTimeConflict(temp, t))
      {
         return false;
      }
      else
      {
        
          count++;
      }
   }
   tasksVec.push_back(t);
   return true;
}
bool Day::checkTimeConflict(Task  *T1, Task *T2)
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


void Day::setName(string n) {
   name = n;
}

bool Day::checkConflict(Task* t1, Task* t2 )
{
   Time* tempStart = t1->getStartTime();
   Time* tempEnd = t1->getEndTime();
   Time* intersect = t2->getStartTime();
   intersect->addMin();
   if(t1->getStartTime() == t2->getStartTime() || t1->getEndTime() == t2->getEndTime())
      return true; //if they are on the same time period
   while (tempStart != tempEnd)
   {
      if(tempStart == intersect)
      {
         return true;
      }
      tempStart->addMin();
   }
   return false;
}


string Day::getName() {
   return name;
}

Day::~Day() {
   for (int i = 0; i < tasksVec.size(); i++) {
      delete tasksVec.at(i);
   }
}