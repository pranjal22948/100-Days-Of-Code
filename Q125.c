#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[260];
    printf("Enter filename: ");
    if (!fgets(filename, sizeof filename, stdin)) {
        printf("Failed to read filename.\n");
        return 1;
    }
    filename[strcspn(filename, "\n")] = '\0';

    FILE *fp = fopen(filename, "a");
    if (!fp) {
        printf("Could not open %s in append mode.\n", filename);
        return 1;
    }

    char line[512];
    printf("Enter text to append: ");
    if (!fgets(line, sizeof line, stdin)) {
        printf("Failed to read text.\n");
        fclose(fp);
        return 1;
    }
    line[strcspn(line, "\n")] = '\0';

    fprintf(fp, "%s\n", line);
    fclose(fp);

    printf("Appended text to %s\n", filename);
    return 0;
}
