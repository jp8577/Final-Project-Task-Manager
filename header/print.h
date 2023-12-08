#ifndef PRINT_H
#define PRINT_H
#include "../header/calendar.h"
// #include "../header/day.h"

class Print {
    public:
        Print();
        // void printCalendar(Calendar cal);
        void printDay(Calendar cal);
        void printMonth(Month* MonthPtr);
        void printTask(Task* taskPtr);
        void printTime(Time* clock); 
        void DisplayMenu();
};

#endif