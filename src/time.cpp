#include "../header/time.h"

#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

Time::Time(int _hours, int _minutes, bool _pm) {
    if (isValidHours(_hours)) {  // check if the hours is a valid number for hours
        hours = _hours;
    } else {
        throw invalid_argument("Hours must be a number 1-12");
    }
    if (isValidMins(_minutes)) {  // check if the minutes is a valid number for minutes
        minutes = _minutes;
    } else {
        throw invalid_argument("Minutes must be a number 0-59");
    }
    pm = _pm;
}

void Time::setHours(int num) {
    if (isValidHours(num)) {
        hours = num;
    } else {
        throw invalid_argument("Hours must be a number 1-12");
    }
}

void Time::setMins(int num) {
    if (isValidMins(num)) {
        minutes = num;
    } else {
        throw invalid_argument("Minutes must be a number 0-59");
    }
}

void Time::setPm(bool _pm) {
    pm = _pm;
}

int Time::getHours() {
    return hours;
}

int Time::getMins() {
    return minutes;
}

bool Time::getPm() {
    return pm;
}

bool Time::isValidHours(int hour) {
    return (hour >= 1 && hour <= 12);
}

bool Time::isValidMins(int min) {
    return (min >= 0 && min < 60);
}

void Time::addMin() {
    minutes++;
    if (minutes == 60) {
        minutes = 0;
        hours++;
        if (hours == 12) {
            // toggle the pm bool
            if (!pm) {
                pm = true;
            } else {
                pm = false;
            }
        } else if (hours == 13) {
            hours = 1;
        }
    }
}

string Time::getTime() {
    string time = to_string(getHours()) + ":" + to_string(getMins());
    return time;
}
bool operator== (Time t1, Time t2)
{
    return (t1.getHours() == t2.getHours()) && (t1.getMins() == t2.getMins()) && (t1.getPm() == t2.getPm());
}