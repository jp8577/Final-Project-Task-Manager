#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    bool pm;
    bool isValidHours(int hour);
    bool isValidMins(int min);

public:
    Time(int _hours, int _minutes, bool _pm);
    void setHours(int num);
    void setMins(int num);
    void setPm(bool _pm);
    int getHours();
    int getMins();
    bool getPm();
    void addMin();
    string getTime();
    


};

#endif