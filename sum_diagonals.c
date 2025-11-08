#include <stdio.h>

int main() {
    int arr[5][5];
    int i, j, main_diagonal = 0, secondary_diagonal = 0;

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
        main_diagonal += arr[i][i];
        secondary_diagonal += arr[i][4 - i];
    }

    printf("\nSum of main diagonal: %d\n", main_diagonal);
    printf("Sum of secondary diagonal: %d\n", secondary_diagonal);

    return 0;
}
