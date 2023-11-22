#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

class Task {
private:
    Time start_time;
    Time end_time;
    string category;
    string location;
    int priority;

public:
    Task(Time _start, Time _end, string _catagory, string _location, int _priority);

};

#endif