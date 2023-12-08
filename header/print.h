#ifndef PRINT_H
#define PRINT_H
#include "../header/calendar.h"
#include "../header/month.h"
// #include "../header/day.h"

class Print {
    public:
        Print();
        void printDay(Calendar cal);
        void printMonth(Calendar cal); 
        void printCalendar(Calendar cal); 
        void printTask(Task* taskPtr);
        void printTime(Time* clock); 
        void DisplayMenu();
};

#endif