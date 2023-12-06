// #include "calendar.cpp"
// #include "day.cpp"
// #include "month.cpp"
// #include "print.cpp"
#include "../header/day.h"
#include "../header/time.h"
#include "../header/task.h"
#include <iostream>
using namespace std;

void DisplayMenu() {
    cout << "Welcome to our Task Manager, choose what you would like to do: " << endl;
    cout << "1. Add a task: " << endl;
    cout << "2. Quit " << endl;
}

int main() {
    int startHour = 0;
    int startMinute = 0;
    int endHour = 0;
    int endMinute = 0;
    int choice = 0;

    DisplayMenu(); // Displays Menu

    cin >> choice; // Lets user choose option

    while (choice != 2) { // While option is not Quit
        switch(choice) {
            case 1:
                cout << "What day would you like to add a task for? " << endl;



            // cin >> startHour >> startMinute;
            // cin >> endHour >> endMinute;
            // Time *startTime = new Time(startHour,startMinute,true);
            // Time *endTime = new Time(endHour, endMinute, true);

            // Task *newTask = new Task(startTime, endTime, "Math", "Chung", "Class", 1);

            // Day *dec5 = new Day();
            // dec5->addTask(newTask);

            // dec5->printTasks();

            cin >> choice;
        }
    }

    return 0;
}

