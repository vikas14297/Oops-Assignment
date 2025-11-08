#include <stdio.h>

int main() {
    int arr[10];
    int i, j, sum, count = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] <= 0) {
            continue;
        }

        sum = 0;
        for (j = 1; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                sum += j;
            }
        }

        if (sum == arr[i]) {
            count++;
        }
    }

    printf("\nCount of perfect numbers: %d\n", count);

    return 0;
}
