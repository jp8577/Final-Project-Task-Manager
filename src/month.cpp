#include "../header/day.h"

Month::Month(string month_name, int _year) {

}

int Month::checkDaysInMonth(int month_num) {
    // jan march may july aug oct dec
    // 1     3    5    7   8   10  12
    if (month_num == 1 || month_num == 3 || month_num == 5 || month_num == 7 || month_num == 8 || month_num == 10 || month_num == 12) {
        return 31;

    // april june sept nov
    //   4    6    9   11
    } else if (month_num == 4 || month_num == 6 || month_num == 9 || month_num == 11) {
        return 30;

    } else {  // it's febuary
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {  // determine if it's leap year
            return 29;
        } else {
            return 28;
        }
    }
}