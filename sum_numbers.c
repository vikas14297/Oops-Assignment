#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("\nSum of all numbers: %d\n", sum);

    return 0;
}
