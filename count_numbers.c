#include <stdio.h>

int main() {
    int num;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("\n--- Results ---\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeros: %d\n", zero_count);

    return 0;
}
