#include <stdio.h>
#include <ctype.h>
#include <string.h>

static int is_vowel(int ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

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

    long vowels = 0;
    long consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            if (is_vowel(ch)) {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %ld\n", vowels);
    printf("Consonants: %ld\n", consonants);
    return 0;
}
