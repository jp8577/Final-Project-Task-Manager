// #include "../header/calendar.h"
#include "../header/time.h"
#include "../header/print.h"
#include "../header/task.h"
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

void Print::printTask(Task* taskPtr) {
    cout << endl;
    cout << "Name: " << taskPtr->getName() << endl;
    cout << "Time: ";
    printTime(taskPtr->getStartTime());
    cout << " - ";
    printTime(taskPtr->getEndTime());
    cout << endl << "Location: " << taskPtr->getLocation() << endl;
    cout << "Description: " << taskPtr->getDescription() << endl;
    cout << "Priority: " << taskPtr->getPriority() << endl << endl;
}

void Print::displayMenu() {
    cout << "Welcome to our Task Manager, choose what you would like to do: " << endl << endl;
    cout << "1. View calendar: " << endl;
    cout << "2. Add a task: " << endl;
    cout << "3. Edit a task: " << endl;
    cout << "4. Change Date" << endl;
    cout << "5. Remove Task: " << endl;
    cout << "6. Quit " << endl << endl;
}

Task* Print::promptAddTask() {
    string name, location, description, isPm;
    int startHour, endHour, startMinute, endMinute, priority;
    bool startPm, endPm;

    cout << "What is the name of your task?: ";
    cin >> name;

    cout << "When will you start this activity?: ";
    cin >> startHour >> startMinute;
    cout << "Is it in the afternoon? (y/n):  ";

    cin >> isPm;

    if (isPm == "y") {
        startPm = true;
    } else {
        startPm = false;
    }

    cout << "When will you end this activity?: ";
    cin >> endHour >> endMinute;
    cout << "Is it in the afternoon? (Y/N):  ";

    cin >> isPm;

    if (isPm == "Y") {
        endPm = true;
    } else {
        endPm = false;
    }


    cout << "Where will your task take place?: ";
    cin >> location;
    
    cout << "What will your task entail?: ";
    cin >> description;

    cout << "What is the priority of your task?: ";
    cin >> priority;

    Time *startTime = new Time(startHour, startMinute, startPm);
    Time *endTime = new Time(endHour, endMinute, endPm);
    Task *newTask = new Task(name, startTime, endTime, location, description, priority); 
    return newTask;
}

Task Print::promptDay() {

}
