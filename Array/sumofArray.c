#include <stdio.h>

int main() {
    int marks[5];

    // Input values into the array
    for (int i = 0; i < 5; i++) {
        printf("Enter %d values: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate the sum of array elements
    int sum = 0;
    for (int j = 0; j < 5; j++) {
        sum = sum + marks[j];
    }

    // Print the sum
    printf("%d", sum);

    return 0;
}
