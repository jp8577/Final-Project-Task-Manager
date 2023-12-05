#include "task.h"
#include <iostream>
#include <string>
#include <vector>
#ifndef DAY_H
#define DAY_H
class Day {
    private:
        vector<Task> tasks();
        int color;
        string name;
        bool checkTimeConflict(Task T1, Task T2);
        bool checkConflict(Task, Task);

    public:
        Day();
        Day(vector<Task>, int, string);
        void createTask(Time start, Time end, string description, string cat, string location, int prio);
        void findColor();
        void setName(string);

        
};


#endif /* DAY_H */
