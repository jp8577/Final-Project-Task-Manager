#ifndef TASK_H
#define TASK_H

#include "../header/time.h"
#include <iostream>
#include <string>
using namespace std;

class Task {
private:
    Time* startTime;
    Time* endTime;
    string name;
    string location;
    string description;
    int priority;


public:
    Task(string _name, Time *start, Time *end, string _location, string _description, int _priority);
    Time* getStartTime();
    Time* getEndTime();
    string getLocation();
    string getDescription();
    int getPriority();
    string getName();
    ~Task();
};

#endif