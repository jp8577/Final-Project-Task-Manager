#include "../header/day.h"
#include "../header/month.h"

Month::Month(string month_name, int _year) {
    if (month_name == "January") {
        month_num = 1;
        special_month_num = 0;
    } else if (month_name == "February") {
        month_num = 2;
        special_month_num = 3;
    } else if (month_name == "March") {
        month_num = 3;
        special_month_num = 3;
    } else if (month_name == "April") {
        month_num = 4;
        special_month_num = 6;
    } else if (month_name == "May") {
        month_num = 5;
        special_month_num = 1;
    } else if (month_name == "June") {
        month_num = 6;
        special_month_num = 4;
    } else if (month_name == "July") {
        month_num = 7;
        special_month_num = 6;
    } else if (month_name == "August") {
        month_num = 8;
        special_month_num = 2;
    } else if (month_name == "September") {
        month_num = 9;
        special_month_num = 5;
    } else if (month_name == "October") {
        month_num = 10;
        special_month_num = 0;
    } else if (month_name == "November") {
        month_num = 11;
        special_month_num = 3;
    } else if (month_name == "December") {
        month_num = 12;
        special_month_num = 5;
    }
    month = month_name;
    year = _year;
    numDays = checkDaysInMonth();
    days = new Day*[numDays];
    string dayNames[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int dayOfWeekIterator = checkFirstDay();
    for (int i = 0; i < numDays + 1; i++) {
        days[i] = new Day(dayNames[dayOfWeekIterator]);
        dayOfWeekIterator++;
        if (dayOfWeekIterator > 6) {
            dayOfWeekIterator = 0;
        }
    }
}

Month::~Month() {
    for (int i = 0; i < numDays; i++) {
        delete days[i]; 
    }
}

int Month::checkDaysInMonth() {
    // jan march may july aug oct dec
    if (month == "January" || month == "March" || month == "May" || month == "July" 
    || month == "August" || month == "October" || month == "December") {
        return 31;

    // april june sept nov
    } else if (month == "April" || month == "June" || month == "September" || month == "November") {
        return 30;

    } else {  // it's febuary
        if (isLeap()) {  // determine if it's leap year
            return 29;
        } else {
            return 28;
        }
    }
}

bool Month::isLeap() {
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int Month::checkFirstDay() {
    int special_num = special_month_num + 1;
    int thousand_counter = 0;
    int _year = year;
    _year -= 2000;
    while (_year < 0) {
        thousand_counter++;
        _year += 1000;
    }
    // we are now left with the last 2 digits of the year
    // if thousand_counter is 0, it's the 2000s. if 1, 1900s. if 2, 1800s. if 3, 1700s. if 4, 1600s.
    special_num += _year % 28;
    special_num += _year / 4;
    if (thousand_counter == 1) {
        special_num += 1;
    } else if (thousand_counter == 2) {
        special_num += 3;
    } else if (thousand_counter == 3) {
        special_num += 5;
    }
    if ((month_num == 1 || month_num == 2) && isLeap()) {
        special_num--;
    }
    special_num = special_num % 7;
    return special_num;
}

Day* Month::getDay(int date) {
    return days[date - 1];
}

int Month::getYear() {
    return year;
}

int Month::getNumDays() {
    return numDays;
}

string Month::getMonthName() {
    return month;
}