#include <stdio.h>

int main() {
    int arr[5][5];
    int i, j, num, temp, reverse, digit;

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

    printf("\nPalindrome numbers in the array:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            num = arr[i][j];
            if (num < 0) {
                continue;
            }

            temp = num;
            reverse = 0;

            while (temp != 0) {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp /= 10;
            }

            if (reverse == num) {
                printf("%d ", num);
            }
        }
    }
    printf("\n");

    return 0;
}
