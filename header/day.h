#include "task.h"
#include <iostream>
#include <string>
#ifndef DAY_H
#define DAY_H
class Day {
    private:
        Task[] tasks;
        int color;
        string name;
        void checkTimeConflict(Time T);

    public:
        void createTask(Time start, Time end, string description, string cat, string location, int prio);
        void printTasks();
        void findColor();
        void printMenu(int taskNum);
        void setName(string);

        
};


#endif /* DAY_H */
