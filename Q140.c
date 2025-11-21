#include <stdio.h>
#include <string.h>

int main(void) {
    enum Gender {
        GENDER_MALE = 1,
        GENDER_FEMALE,
        GENDER_OTHER
    };

    struct Person {
        char name[100];
        enum Gender gender;
    } person;

    printf("Enter name: ");
    if (!fgets(person.name, sizeof person.name, stdin)) {
        printf("Failed to read name.\n");
        return 1;
    }
    person.name[strcspn(person.name, "\n")] = '\0';

    int choice = 0;
    printf("Select gender (1-Male, 2-Female, 3-Other): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice < GENDER_MALE || choice > GENDER_OTHER) {
        printf("Unknown gender selection.\n");
        return 1;
    }

    person.gender = (enum Gender)choice;

    printf("Name: %s\n", person.name);
    switch (person.gender) {
        case GENDER_MALE:
            printf("Gender: Male\n");
            break;
        case GENDER_FEMALE:
            printf("Gender: Female\n");
            break;
        case GENDER_OTHER:
            printf("Gender: Other\n");
            break;
    }

    return 0;
}
