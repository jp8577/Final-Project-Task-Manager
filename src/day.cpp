#include "../header/day.h"

Day::Day()
 {
    tasks[10] = {};
    color = 0;
    name = " ";

 }  
Day::Day(Task[] t, int c, string n)
 {
    tasks = t;
    color = c;
    name = n;

 }
void Day::createTask(Time start, Time end, string description, string cat, string location, int prio)
{
    Task newTask = Task(start, end, description, cat, location, prio);
    checkTimeConflict(newTask);

}
void Day::checkTimeConflict(Time T)
{
    
}
void Day::printTasks();
void Day::findColor();
void Day::printMenu(int taskNum);
void Day::setName(string);
