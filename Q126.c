#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[260];
    printf("Enter filename to read: ");
    if (!fgets(filename, sizeof filename, stdin)) {
        printf("Failed to read filename.\n");
        return 1;
    }
    filename[strcspn(filename, "\n")] = '\0';

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error: could not open %s.\n", filename);
        return 1;
    }

    printf("Contents of %s:\n", filename);
    char buffer[256];
    while (fgets(buffer, sizeof buffer, fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
