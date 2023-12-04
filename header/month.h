#include "task.h"
#include <iostream>
#include <string>
#ifndef MONTH_H
#define MONTH_H
class Month {
    private:
        string month;
        int year;
        int numDays;
        Day[] days;

        int checkDaysInMonth(int month_num);

    public:
        Month(string month_name, int _year);

        
};


#endif /* MONTH_H */
