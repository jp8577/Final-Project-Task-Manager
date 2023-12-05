#include "../header/calendar.h"
#include "../header/time.h"
#include "../header/print.h"
#include <string>
#include <iostream>
using namespace std;

Print::Print() {

}

void Print::printTime(Time* clock) {
    cout << clock->getHours() << ":" << clock->getMins();
    if (!clock->getPm()) {
        cout << "am";
    } else {
        cout << "pm";
    }
}