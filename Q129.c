#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) {
        printf("Could not open numbers.txt.\n");
        return 1;
    }

    long long sum = 0;
    long count = 0;
    int value = 0;

    while (fscanf(fp, "%d", &value) == 1) {
        sum += value;
        ++count;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in numbers.txt\n");
        return 0;
    }

    double average = (double)sum / count;
    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
