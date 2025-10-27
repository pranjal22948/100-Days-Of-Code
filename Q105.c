#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], count = 0, candidate;
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) count++;
        else count--;
    }
    count = 0;
    for (int i = 0; i < n; i++) if (nums[i] == candidate) count++;
    if (count > n / 2) printf("%d\n", candidate);
    else printf("-1\n");
    return 0;
}