#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    scanf(" %[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }
    printf("%d %d\n", vowels, consonants);
    return 0;
}
