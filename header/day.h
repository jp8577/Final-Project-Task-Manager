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
    public:
        void createTask();
        void printTasks();
        void findColor();
        void printMenu(int taskNum);
        void setName(string);

        
};


#endif /* DAY_H */
