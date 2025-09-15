#include <stdio.h>

int main() {
    long long binary, onesComp = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        int digit = binary % 10;
        // Flip the bit: 0 becomes 1, 1 becomes 0
        int flipped = (digit == 0) ? 1 : 0;
        onesComp += flipped * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's complement: %lld\n", onesComp);
    return 0;
}