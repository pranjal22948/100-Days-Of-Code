#include <stdio.h>

int main(void) {
    enum Role {
        ADMIN = 1,
        USER,
        GUEST
    };

    int value = 0;
    printf("Select role:\n");
    printf(" 1 - Admin\n");
    printf(" 2 - User\n");
    printf(" 3 - Guest\n");
    printf("Choice: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (value < ADMIN || value > GUEST) {
        printf("Unknown role.\n");
        return 1;
    }

    enum Role role = (enum Role)value;
    switch (role) {
        case ADMIN:
            printf("ADMIN: Full access granted.\n");
            break;
        case USER:
            printf("USER: Limited access granted.\n");
            break;
        case GUEST:
            printf("GUEST: View-only access granted.\n");
            break;
    }

    return 0;
}
