#include <stdio.h>

int main(void) {
    enum Level {
        LEVEL_LOW = 10,
        LEVEL_MEDIUM,
        LEVEL_HIGH,
        LEVEL_CRITICAL
    };

    printf("LEVEL_LOW = %d\n", LEVEL_LOW);
    printf("LEVEL_MEDIUM = %d\n", LEVEL_MEDIUM);
    printf("LEVEL_HIGH = %d\n", LEVEL_HIGH);
    printf("LEVEL_CRITICAL = %d\n", LEVEL_CRITICAL);

    return 0;
}
