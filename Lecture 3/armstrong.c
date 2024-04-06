#include <stdio.h>

int main() {
    printf("Armstrong numbers between 1 and 500:\n");

    for (int i = 1; i <= 500; ++i) {
        int num = i;
        int arm = 0;
        int originalNum = num;

        while (num > 0) {
            int lastDigit = num % 10;
            arm += lastDigit * lastDigit * lastDigit;
            num /= 10;
        }

        if (arm == originalNum) {
            printf("%d\n", originalNum);
        }
    }

    return 0;
}
