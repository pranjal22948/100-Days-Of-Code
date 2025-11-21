#include <stdio.h>

int main(void) {
    enum TrafficLight {
        RED,
        YELLOW,
        GREEN
    };

    for (int value = RED; value <= GREEN; ++value) {
        enum TrafficLight light = (enum TrafficLight)value;
        switch (light) {
            case RED:
                printf("RED: Stop\n");
                break;
            case YELLOW:
                printf("YELLOW: Wait\n");
                break;
            case GREEN:
                printf("GREEN: Go\n");
                break;
        }
    }

    return 0;
}
