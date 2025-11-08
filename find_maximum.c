#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    int max = INT_MIN;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("\n--- Result ---\n");
    printf("Maximum number: %d\n", max);

    return 0;
}
