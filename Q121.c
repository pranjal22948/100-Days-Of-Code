#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    int age = 0;

    printf("Enter name: ");
    if (!fgets(name, sizeof name, stdin)) {
        printf("Failed to read name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0';

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid age input.\n");
        return 1;
    }

    FILE *fp = fopen("info.txt", "w");
    if (!fp) {
        printf("Could not open info.txt for writing.\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data saved to info.txt\n");
    return 0;
}
