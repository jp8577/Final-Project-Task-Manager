#include "task.h"
#include <iostream>
#include <string>
#include <vector>
#ifndef DAY_H
#define DAY_H
class Day {
    private:
        int color;
        string name;
        string month;
        string day;
        void checkTimeConflict(Time T);
        vector<Task*> tasksVec;

    public:
        Day();
        Day(string month, string day, vector<Task*> tasks, int c, string n);
        void addTask(Task *t);
        void printTasks();
        // void findColor();
        // void printMenu(int taskNum);
        // void setName(string);

        
};


#endif /* DAY_H */
