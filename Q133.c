#include <stdio.h>

int main(void) {
    enum Month {
        JANUARY = 1,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    const char *names[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    const int days[] = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31
    };

    for (int month = JANUARY; month <= DECEMBER; ++month) {
        int index = month - JANUARY;
        printf("%s has %d days\n", names[index], days[index]);
    }

    return 0;
}
