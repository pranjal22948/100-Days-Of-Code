#include <stdio.h>

int main(void) {
    enum Day {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    const char *names[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    for (int day = SUNDAY; day <= SATURDAY; ++day) {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}
