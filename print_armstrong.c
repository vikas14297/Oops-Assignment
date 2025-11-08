#include <stdio.h>

int main() {
    int arr[10];
    int i, num, temp, sum, digit, count;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArmstrong numbers in the array:\n");

    for (i = 0; i < 10; i++) {
        num = arr[i];
        if (num < 0) {
            continue;
        }

        temp = num;
        count = 0;
        while (temp != 0) {
            temp /= 10;
            count++;
        }

        temp = num;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            int power = 1;
            for (int j = 0; j < count; j++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
