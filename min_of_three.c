#include <stdio.h>

int main() {
    int num1, num2, num3, min;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    min = num1;

    if (num2 < min) {
        min = num2;
    }

    if (num3 < min) {
        min = num3;
    }

    printf("\nMinimum number: %d\n", min);

    return 0;
}
