#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int *nums = malloc(n * sizeof *nums);
    if (!nums) return 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("-1 -1");
    }
    free(nums);
    return 0;
}