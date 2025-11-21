#include <stdio.h>
#include <string.h>

int main(void) {
    char source[260];
    char destination[260];

    printf("Enter source filename: ");
    if (!fgets(source, sizeof source, stdin)) {
        printf("Failed to read source filename.\n");
        return 1;
    }
    source[strcspn(source, "\n")] = '\0';

    printf("Enter destination filename: ");
    if (!fgets(destination, sizeof destination, stdin)) {
        printf("Failed to read destination filename.\n");
        return 1;
    }
    destination[strcspn(destination, "\n")] = '\0';

    FILE *src = fopen(source, "r");
    if (!src) {
        printf("Could not open %s for reading.\n", source);
        return 1;
    }

    FILE *dst = fopen(destination, "w");
    if (!dst) {
        printf("Could not open %s for writing.\n", destination);
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("Copied %s to %s\n", source, destination);
    return 0;
}
