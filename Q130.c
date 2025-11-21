#include <stdio.h>

#define MAX_STUDENTS 50

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main(void) {
    struct Student students[MAX_STUDENTS];
    int count = 0;

    printf("Enter number of students (1-%d): ", MAX_STUDENTS);
    if (scanf("%d", &count) != 1 || count <= 0 || count > MAX_STUDENTS) {
        printf("Invalid count.\n");
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        printf("Student %d name (no spaces): ", i + 1);
        if (scanf("%49s", students[i].name) != 1) {
            printf("Failed to read name.\n");
            return 1;
        }
        printf("Roll number: ");
        if (scanf("%d", &students[i].roll) != 1) {
            printf("Failed to read roll number.\n");
            return 1;
        }
        printf("Marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            printf("Failed to read marks.\n");
            return 1;
        }
    }

    FILE *fp = fopen("students.txt", "w");
    if (!fp) {
        printf("Could not open students.txt for writing.\n");
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (!fp) {
        printf("Could not reopen students.txt for reading.\n");
        return 1;
    }

    char name[50];
    int roll = 0;
    float marks = 0.0f;

    printf("Stored records:\n");
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
