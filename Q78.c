#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < n; i++)
        sum += matrix[i][i];
    printf("%d\n", sum);
    return 0;
}