#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int maxSum = INT_MIN;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) sum += arr[i + j];
        if (sum > maxSum) maxSum = sum;
    }
    printf("%d\n", maxSum);
    return 0;
}