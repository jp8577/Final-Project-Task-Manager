#include "calendar.cpp"
#include "day.cpp"
#include "month.cpp"
#include "print.cpp"
#include "task.cpp"
#include "time.cpp"

int main() {
    Time* start = new Time(10, 0, false);
    Time* end = new Time(11, 50, false);
    Task* yuh = new Task("cs class", start, end, "school", "UCR", "learn stuff", 1);
    Print* printer = new Print();
    printer->printTask(yuh);

    return 0;
}