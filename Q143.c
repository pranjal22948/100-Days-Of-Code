#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

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
    struct Student students[MAX_STUDENTS];
    int count = 0;

    printf("Enter number of students (1-%d): ", MAX_STUDENTS);
    if (scanf("%d", &count) != 1 || count <= 0 || count > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }
    clear_line();

    for (int i = 0; i < count; ++i) {
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

    if (count > 0) {
        int top_index = 0;
        for (int i = 1; i < count; ++i) {
            if (students[i].marks > students[top_index].marks) {
                top_index = i;
            }
        }

        printf("\nTop student:\n");
        printf("Name: %s\n", students[top_index].name);
        printf("Roll: %d\n", students[top_index].roll_no);
        printf("Marks: %.2f\n", students[top_index].marks);
    }

    return 0;
}
