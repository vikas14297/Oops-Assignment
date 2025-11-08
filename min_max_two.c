#include <stdio.h>

int main() {
    int num1, num2, min, max;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }

    printf("\nMinimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
