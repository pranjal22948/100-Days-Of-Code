#include <stdio.h>
#include <string.h>

#define STUDENT_COUNT 5

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

static void clear_line(void) {
    int ch = 0;
    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
}

int main(void) {
    struct Student students[STUDENT_COUNT];

    for (int i = 0; i < STUDENT_COUNT; ++i) {
        printf("Student %d name: ", i + 1);
        if (!fgets(students[i].name, sizeof students[i].name, stdin)) {
            printf("Failed to read name.\n");
            return 1;
        }
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Roll number: ");
        if (scanf("%d", &students[i].roll_no) != 1) {
            printf("Invalid roll number.\n");
            return 1;
        }

        printf("Marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            printf("Invalid marks.\n");
            return 1;
        }

        clear_line();
    }

    printf("\nStudent list:\n");
    for (int i = 0; i < STUDENT_COUNT; ++i) {
        printf("%d. Name: %s | Roll: %d | Marks: %.2f\n",
               i + 1,
               students[i].name,
               students[i].roll_no,
               students[i].marks);
    }

    return 0;
}
