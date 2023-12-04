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

int Time::getPm() {
    return pm;
}

bool Time::isValidHours(int hour) {
    return (hour >= 1 && hour <= 12);
}

bool TIme::isValidMins(int min) {
    return (min >= 0 && min < 60);
}