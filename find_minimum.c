#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    int min = INT_MAX;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }
    }

    printf("\n--- Result ---\n");
    printf("Minimum number: %d\n", min);

    return 0;
}
