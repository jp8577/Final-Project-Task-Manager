#ifndef PRINT_H
#define PRINT_H
#include "../header/calendar.h"

class Print {
    public:
        Print();
        void printDay(Calendar cal);
        void printMonth(Calendar cal); 
        void printCalendar(Calendar cal); 
        void printTask(Calendar cal); 
        void printTime(Time* clock); 
};

#endif