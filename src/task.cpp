#include "../header/task.h"
#include "../header/time.h"

#include <string>
#include <iostream>
using namespace std;

Task::Task(string _name, Time *start, Time *end, string _catagory, string _location, string _description, int _priority) {
    startTime = start;
    endTime = end;
    name = _name;
    category = _catagory;
    location = _location;
    description = _description;
    priority = _priority;
}

Time* Task::getStartTime() {
    return startTime;
}
Time* Task::getEndTime() {
    return endTime;
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

string Task::getName() {
    return name;
}