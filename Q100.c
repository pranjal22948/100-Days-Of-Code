#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}