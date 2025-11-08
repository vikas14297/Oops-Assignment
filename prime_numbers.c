#include <stdio.h>

int main() {
    int arr[10];
    int i, j, is_prime;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nPrime numbers in the array:\n");

    for (i = 0; i < 10; i++) {
        if (arr[i] <= 1) {
            continue;
        }

        is_prime = 1;
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
