#include "task.h"
#include <iostream>
#include <string>
#ifndef MONTH_H
#define MONTH_H
class Month {
    private:
        string month;
        int month_num;
        int year;
        int numDays;
        Day[32] days;

        int checkDaysInMonth();
        int checkFirstDay();
        bool isLeap();

    public:
        Month(string month_name, int _year);

        
};


#endif /* MONTH_H */
