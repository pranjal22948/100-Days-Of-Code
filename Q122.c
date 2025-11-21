#include <stdio.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (!fp) {
        printf("Could not open info.txt for reading.\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof buffer, fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
