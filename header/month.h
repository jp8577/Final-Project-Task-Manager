#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <string>
#include "../header/day.h"
class Month {
    private:
        string month;
        int month_num;
        int year;
        int numDays;
        Day** days;

        int checkDaysInMonth();
        int checkFirstDay();
        bool isLeap();

    public:
        Month(string month_name, int _year);
        int getOne();
        ~Month();

        
};


#endif /* MONTH_H */
