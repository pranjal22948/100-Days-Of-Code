#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int merged[m + n], i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}