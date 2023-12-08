// #include "calendar.cpp"
// #include "month.cpp"
#include "../header/print.h"
#include "../header/day.h"
#include "../header/time.h"
#include "../header/task.h"

#include <iostream>
using namespace std;

int main() {
    int choice;
    Print printer = Print();
    
    // Task Manager Start
    printer.displayMenu();

    cin >> choice;

    if (choice == 2) {
        Task *task = printer.promptAddTask();
        printer.printTask(task);
    }

    return 0;
}