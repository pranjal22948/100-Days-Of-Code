#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student student;

    printf("Enter student name: ");
    if (!fgets(student.name, sizeof student.name, stdin)) {
        printf("Failed to read name.\n");
        return 1;
    }
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter roll number: ");
    if (scanf("%d", &student.roll_no) != 1) {
        printf("Invalid roll number.\n");
        return 1;
    }

    printf("Enter marks: ");
    if (scanf("%f", &student.marks) != 1) {
        printf("Invalid marks.\n");
        return 1;
    }

    printf("\nStudent Details\n");
    printf("Name: %s\n", student.name);
    printf("Roll No: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
