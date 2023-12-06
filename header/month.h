#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <string>
#include "../header/day.h"

//namespace months {

class Month {
    // friend class MonthTests; 
    // FRIEND_TEST(MonthTests, monthCheckDaysInMonth1);
    // FRIEND_TEST(MonthTests, monthCheckDaysInMonth2);
    // FRIEND_TEST(MonthTests, monthCheckDaysInMonth3);
    
    private:
        string month;
        int month_num;
        int year;
        int numDays;
        Day* days;

        int checkDaysInMonth();
        int checkFirstDay();
        bool isLeap();
        
        // accessors
        string getMonth(); 
        int getYear(); 

    public:
        Month(string month_name, int _year);

        
};

//}

#endif /* MONTH_H */
