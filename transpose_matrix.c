#include <stdio.h>

int main() {
    int arr[5][5], transpose[5][5];
    int i, j;

    printf("Enter elements of 5x5 array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("\nTranspose Matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
