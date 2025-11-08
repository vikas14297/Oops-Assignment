#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, temp;
    int sum_first_two, sum_last_two;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    if (temp < 0) {
        temp = -temp;
    }

    if ((num >= 1000 && num <= 9999) || (num <= -1000 && num >= -9999)) {
        printf("%d is a 4-digit number.\n", num);

        d4 = temp % 10;
        temp /= 10;
        d3 = temp % 10;
        temp /= 10;
        d2 = temp % 10;
        temp /= 10;
        d1 = temp % 10;

        sum_first_two = d1 + d2;
        sum_last_two = d3 + d4;

        printf("First two digits: %d, %d (Sum = %d)\n", d1, d2, sum_first_two);
        printf("Last two digits: %d, %d (Sum = %d)\n", d3, d4, sum_last_two);

        if (sum_first_two > sum_last_two) {
            printf("Sum of first two digits is greater than sum of last two digits.\n");
        } else {
            printf("Sum of first two digits is NOT greater than sum of last two digits.\n");
        }
    } else {
        printf("%d is not a 4-digit number.\n", num);
    }

    return 0;
}
