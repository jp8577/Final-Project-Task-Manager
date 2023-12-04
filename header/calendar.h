#ifndef CALENDAR_H
#define CALENDAR_H
#include <string>
#include "month.h"

class Calendar {
    private:
        Month[] months; 

    public:
        void getInput(string input); 
        void viewMode();
        void editMode(); 
};

#endif