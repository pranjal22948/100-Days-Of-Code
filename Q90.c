#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (char)(str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (char)(str[i] + 32);
    }
    printf("%s\n", str);
    return 0;
}