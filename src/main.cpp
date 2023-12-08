// #include "calendar.cpp"
// #include "day.cpp"
#include "../header/month.h"
#include "../header/print.h"
#include "../header/day.h"
#include "../header/time.h"
#include "../header/task.h"

#include <iostream>
using namespace std;

int main() {
    Print* printer = new Print();
    string month = "";
    int year;

    if (month != "January" || month != "February" || month != "March" || month != "April" ||
    month != "May" || month != "June" || month != "July" || month != "August" || month != "September" ||
    month != "October" || month != "November") {
        cout << "Enter a month (full name): ";
        cin >> month;
    }
    cout << "enter a year: ";
    cin >> year;

    Month* userMonth = new Month(month, year);

    bool stop = false;
    while (!stop) {
        printer->printMonth(userMonth);
        cout << "-------------- Menu --------------" << endl;
        cout << "(A)dd task" << endl;
        cout << "(V)iew day" << endl;
        cout << "(Q)uit" << endl;
        cout << "Choose an option: ";
        char userInput;
        cin >> userInput;
        if (userInput == 'A' || userInput == 'a') {
            // Add task
            int day;
            cout << "What day would you like to add a task to? ";
            cin >> day;
            if (day <= userMonth->getNumDays() && day > 0) {
                printer->printDay(userMonth->getDay(day));

                // declare variables
                string taskName;
                int startHour;
                int startMins;
                bool startPm;
                int endHour;
                int endMins;
                bool endPm;
                string location;
                string description;
                int priority;
                string amOrPm;

                // get user input
                cout << "Enter task name: ";
                cin >> taskName;
                cout << "Enter start hour: ";
                cin >> startHour;
                cout << "Enter start minutes: ";
                cin >> startMins;
                cout << "am or pm? ";
                cin >> amOrPm;
                if (amOrPm == "pm" || amOrPm == "PM") {
                    startPm = true;
                }
                cout << "Enter end hour: ";
                cin >> endHour;
                cout << "Enter end minutes: ";
                cin >> endMins;
                cout << "am or pm? ";
                cin >> amOrPm;
                if (amOrPm == "pm" || amOrPm == "PM") {
                    endPm = true;
                }
                cout << "Enter location: ";
                cin >> location;
                cout << "Enter description: ";
                cin >> description;
                cout << "Enter priority: ";
                cin >> priority;
                
                Time* startTime = new Time(startHour, startMins, startPm);
                Time* endTime = new Time(endHour, endMins, endPm);
                Task* newTask = new Task(taskName, startTime, endTime, location, description, priority);
                userMonth->getDay(day)->addTask(newTask);
                cout << endl << "Task added. Here's a summary." << endl;
                printer->printTask(newTask);
            }
        } else if (userInput == 'V' || userInput == 'v') {
            int day;
            cout << "What day would you like to view? ";
            cin >> day;
            if (day <= userMonth->getNumDays() && day > 0) {
                printer->printDay(userMonth->getDay(day));
            }
        } else if (userInput == 'Q' || userInput == 'q') {
            stop = true;
        }
    }

    return 0;
}