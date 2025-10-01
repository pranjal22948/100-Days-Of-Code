#include <stdio.h>

int main() {
    int n, symmetric = 1;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] != matrix[j][i])
                symmetric = 0;
    if (symmetric)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}