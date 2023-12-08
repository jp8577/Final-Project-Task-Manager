#include "task.h"
#include <iostream>
#include <string>
#include <vector>
#ifndef DAY_H
#define DAY_H
class Day {
    private:
        string name;
        vector<Task*> tasksVec;
        bool checkTimeConflict(Task *T1, Task *T2);
        int totMinofDay(Time*);


    public:
        Day();
        Day(string );
        bool addTask(Task *t);
        void setName(string);
        string getName();
        ~Day();

        
};


#endif /* DAY_H */
