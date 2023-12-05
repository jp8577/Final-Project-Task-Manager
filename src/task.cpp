#include "../header/task.h"


#include <string>
#include <iostream>
using namespace std;

Task::Task(Time *start, Time *end, string _catagory, string _location, string _description, int _priority) {
    startTime = start;
    endTime = end;
    category = _catagory;
    location = _location;
    description = _description;
    priority = _priority;
}

Time Task::getStartTime() {
    return *startTime;
}
Time Task::getEndTime() {
    return *endTime;
}
string Task::getCategory() {
    return category;
}
string Task::getLocation() {
    return location;
}
string Task::getDescription() {
    return description;
}
int Task::getPriority() {
    return priority;
}