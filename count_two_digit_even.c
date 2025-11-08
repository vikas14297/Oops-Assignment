#include <stdio.h>

int main() {
    int arr[10];
    int i, count = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] >= 10 && arr[i] <= 99 && arr[i] % 2 == 0) {
            count++;
        } else if (arr[i] <= -10 && arr[i] >= -99 && arr[i] % 2 == 0) {
            count++;
        }
    }

    printf("\nCount of 2-digit even numbers: %d\n", count);

    return 0;
}
