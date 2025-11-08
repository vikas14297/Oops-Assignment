#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num >= 10 && num <= 99) || (num <= -10 && num >= -99)) {
        printf("%d is a 2-digit number.\n", num);
    } else {
        printf("%d is not a 2-digit number.\n", num);
    }

    return 0;
}
