#include <stdio.h>

int main() {
    int arr[5][5];
    int i, j, k, is_prime, count = 0;

    printf("Enter elements of 5x5 array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n5x5 Array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (arr[i][j] <= 1) {
                continue;
            }

            is_prime = 1;
            for (k = 2; k * k <= arr[i][j]; k++) {
                if (arr[i][j] % k == 0) {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime) {
                count++;
            }
        }
    }

    printf("\nCount of prime numbers: %d\n", count);

    return 0;
}
