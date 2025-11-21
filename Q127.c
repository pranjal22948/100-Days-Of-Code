#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *input = fopen("input.txt", "r");
    if (!input) {
        printf("Could not open input.txt for reading.\n");
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if (!output) {
        printf("Could not open output.txt for writing.\n");
        fclose(input);
        return 1;
    }

    int ch;
    while ((ch = fgetc(input)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Converted content written to output.txt\n");
    return 0;
}
