#include <stdio.h>
#include <limits.h>

int main() {
    int arr[5][5];
    int i, j, max = INT_MIN;

    printf("Enter elements of 5x5 array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > max) {
                max = arr[i][j];
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

    printf("\nMaximum element: %d\n", max);

    return 0;
}
