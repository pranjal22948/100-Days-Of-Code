#include <stdio.h>

int main() {
    int percentage;

    // Input from user
    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);

    // Validate input and assign grade
    if (percentage >= 0 && percentage <= 100) {
        if (percentage >= 90) {
            printf("Grade A\n");
        } else if (percentage >= 80) {
            printf("Grade B\n");
        } else if (percentage >= 70) {
            printf("Grade C\n");
        } else if (percentage >= 60) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    } else {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    }

    return 0;
}
