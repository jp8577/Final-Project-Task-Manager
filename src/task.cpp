#include "task.h"

#include <string>
#include <iostream>
using namespace std;

Task::Task(Time _start, Time _end, string _catagory, string _location, string _decription, int _priority) {
    startTime = _start;
    endTime = _end;
    category = _catagory;
    location = _location;
    decription = _decription;
    priority = _priority;
}