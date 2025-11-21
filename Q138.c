#include <stdio.h>

int main(void) {
    enum Color {
        COLOR_RED,
        COLOR_GREEN,
        COLOR_BLUE,
        COLOR_YELLOW,
        COLOR_BLACK
    };

    const char *names[] = {
        "COLOR_RED",
        "COLOR_GREEN",
        "COLOR_BLUE",
        "COLOR_YELLOW",
        "COLOR_BLACK"
    };

    for (int color = COLOR_RED; color <= COLOR_BLACK; ++color) {
        printf("%s = %d\n", names[color], color);
    }

    return 0;
}
