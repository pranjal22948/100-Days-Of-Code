#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = d < cols ? 0 : d - cols + 1;
        int c = d < cols ? d : cols - 1;
        while (r < rows && c >= 0)
            printf("%d ", matrix[r++][c--]);
    }
    printf("\n");
    return 0;
}