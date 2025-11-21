#include <stdio.h>

int main(void) {
    enum Operation {
        ADD = 1,
        SUBTRACT,
        MULTIPLY
    };

    int choice = 0;
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;

    printf("Select operation:\n");
    printf(" 1 - Add\n");
    printf(" 2 - Subtract\n");
    printf(" 3 - Multiply\n");
    printf("Choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    if (choice < ADD || choice > MULTIPLY) {
        printf("Choice must be between 1 and 3.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Invalid numbers.\n");
        return 1;
    }

    enum Operation op = (enum Operation)choice;
    switch (op) {
        case ADD:
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
    }

    return 0;
}
