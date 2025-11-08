#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
        printf("%d is a 3-digit number.\n", num);

        temp = num;
        if (temp < 0) {
            temp = -temp;
        }

        while (temp != 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        printf("Sum of digits: %d\n", sum);
    } else {
        printf("%d is not a 3-digit number.\n", num);
    }

    return 0;
}
