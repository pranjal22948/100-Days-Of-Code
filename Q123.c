#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char filename[260];
    printf("Enter filename: ");
    if (!fgets(filename, sizeof filename, stdin)) {
        printf("Failed to read filename.\n");
        return 1;
    }
    filename[strcspn(filename, "\n")] = '\0';

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Could not open %s.\n", filename);
        return 1;
    }

    long characters = 0;
    long words = 0;
    long lines = 0;
    int in_word = 0;
    int last_char = '\n';
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        ++characters;
        if (ch == '\n') {
            ++lines;
        }
        if (!isspace(ch)) {
            if (!in_word) {
                ++words;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
        last_char = ch;
    }

    fclose(fp);

    if (characters > 0 && last_char != '\n') {
        ++lines;
    }

    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);
    return 0;
}
