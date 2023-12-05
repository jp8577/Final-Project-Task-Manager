#ifndef PRINT_H
#define PRINT_H
#include "calendar.h"

class Print {
    public:
        void printDay(Calendar cal);
        void printMonth(Calendar cal); 
        void printCalendar(Calendar cal); 
        void printTask(Calendar cal); 
        void printTime(Calendar cal); 
};

#endif