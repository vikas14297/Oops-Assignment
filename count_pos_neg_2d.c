#include <stdio.h>

int main() {
    int arr[5][5];
    int i, j, positive = 0, negative = 0, zero = 0;

    printf("Enter elements of 5x5 array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > 0) {
                positive++;
            } else if (arr[i][j] < 0) {
                negative++;
            } else {
                zero++;
            }
        }
    }

    printf("\n5x5 Array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nPositive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeros: %d\n", zero);

    return 0;
}
