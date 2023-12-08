#include "../header/calendar.h"
#include "../header/time.h"
#include "../header/print.h"
#include "../header/task.h"
#include <string>
#include <iostream>
using namespace std;

Print::Print() {

}

void Print::printDay(Day* dayPtr) {
    cout << dayPtr->getName() << ":" << endl << endl;
    for (int i = 0; i < dayPtr->getTasksAmount(); i++) {
        printTask(dayPtr->getTask(i));
        cout << endl;  
    }
}

void Print::printTime(Time* clock) {
    cout << clock->getHours() << ":";
    if (clock->getMins() < 10) {
        cout << "0";
    }
    cout << clock->getMins();
    if (!clock->getPm()) {
        cout << "am";
    } else {
        cout << "pm";
    }
}

void Print::printTask(Task* taskPtr) {
    cout << "Name: " << taskPtr->getName() << endl;
    cout << "Time: ";
    printTime(taskPtr->getStartTime());
    cout << " - ";
    printTime(taskPtr->getEndTime());
    cout << endl << "Location: " << taskPtr->getLocation() << endl;
    cout << "Description: " << taskPtr->getDescription() << endl;
    cout << "Priority: " << taskPtr->getPriority() << endl;
}

void Print::DisplayMenu() {
    cout << "Welcome to our Task Manager, choose what you would like to do: " << endl;
    cout << "1. View calendar: " << endl;
    cout << "2. Add a task: " << endl;
    cout << "3. Edit a task: " << endl;
    cout << "4. Change Date" << endl;
    cout << "5. Remove Task: " << endl;
    cout << "6. Quit " << endl;
}

void Print::printMonth(Month* MonthPtr) {
    cout << "----------" << MonthPtr->getMonthName() << "--------------" << endl;
    cout << "---------  " << MonthPtr->getYear() << "  -------------" << endl;
    cout << "  Su   M   T   W  Th   F  Sa" << endl;
    string dayName = MonthPtr->getDay(1)->getName();

    // set the zeros
    int counter = 0;
    if (dayName != "Sunday") {
        cout << "   0";
        counter++;
        if (dayName != "Monday") {
            cout << "   0";
            counter++;
            if (dayName != "Tuesday") {
                cout << "   0";
                counter++;
                if (dayName != "Wednesday") {
                    cout << "   0";
                    counter++;
                    if (dayName != "Thursday") {
                        cout << "   0";
                        counter++;
                        if (dayName != "Friday") {
                            cout << "   0";
                            counter++;
                        }
                    }
                }
            }
        }
    }



    // we have a counter for what day the first is on (0 for sunday. 1 for monday. etc)
    for (int i = 1; i < MonthPtr->getNumDays() + 1; i++) {
        if (counter == 7) {
            cout << endl;
            counter = 0;
        }
        if (i < 10) {
            cout << " ";
        }
        cout << "  " << i;
        counter++;
    }
    cout << endl;
}
