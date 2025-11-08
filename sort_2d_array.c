#include <stdio.h>

int main() {
    int arr[5][5];
    int temp[25];
    int i, j, k, l, swap_temp;

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

    k = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            temp[k] = arr[i][j];
            k++;
        }
    }

    for (i = 0; i < 25; i++) {
        for (j = i + 1; j < 25; j++) {
            if (temp[i] > temp[j]) {
                swap_temp = temp[i];
                temp[i] = temp[j];
                temp[j] = swap_temp;
            }
        }
    }

    k = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            arr[i][j] = temp[k];
            k++;
        }
    }

    printf("\nMatrix in Ascending Order:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
