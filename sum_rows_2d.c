#include <stdio.h>

int main() {
    int arr[5][5];
    int i, j, row_sum;

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

    printf("\nSum of each row:\n");
    for (i = 0; i < 5; i++) {
        row_sum = 0;
        for (j = 0; j < 5; j++) {
            row_sum += arr[i][j];
        }
        printf("Row %d: %d\n", i, row_sum);
    }

    return 0;
}
