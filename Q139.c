#include <stdio.h>

int main(void) {
    enum Permission {
        PERM_NONE = 0,
        PERM_READ = 1,
        PERM_WRITE = 2,
        PERM_EXECUTE = 4
    };

    printf("PERM_NONE = %d\n", PERM_NONE);
    printf("PERM_READ = %d\n", PERM_READ);
    printf("PERM_WRITE = %d\n", PERM_WRITE);
    printf("PERM_EXECUTE = %d\n", PERM_EXECUTE);

    int combined = PERM_READ | PERM_WRITE;
    printf("Combined PERM_READ | PERM_WRITE = %d\n", combined);

    return 0;
}
