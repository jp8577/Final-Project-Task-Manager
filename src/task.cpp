#include "task.h"

#include <string>
#include <iostream>
using namespace std;

Task::Task(Time _start, Time _end, string _catagory, string _location, string _description, int _priority) {
    startTime = _start;
    endTime = _end;
    category = _catagory;
    location = _location;
    description = _description;
    priority = _priority;
}