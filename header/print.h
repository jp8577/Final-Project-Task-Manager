#ifndef PRINT_H
#define PRINT_H
#include "calendar.h"
using namespace std;

class Print {
public:
    void printDay(Calendar calendar);
    void printMonth(Calendar calendar); 
    void printCalendar(Calendar calendar); 
    void printTask(Calendar calendar); 
    void printTime(Calendar calendar); 
};

#endif