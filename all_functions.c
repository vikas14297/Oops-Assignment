#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int isArmstrong(int num) {
    int temp, count = 0, sum = 0, digit;

    temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return (sum == num);
}

int isPalindrome(int num) {
    int temp, reverse = 0, digit;

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    return (reverse == num);
}

int isPrime(int num) {
    int i;

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int power(int base, int exp) {
    int result = 1, i;

    for (i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}

int factorial(int n) {
    int result = 1, i;

    for (i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int max(int a, int b, int c) {
    int maximum = a;

    if (b > maximum) {
        maximum = b;
    }

    if (c > maximum) {
        maximum = c;
    }

    return maximum;
}

int main() {
    int choice, num, n, a, b, c, base, exp;

    printf("Select a function:\n");
    printf("1. Fibonacci Series\n");
    printf("2. Armstrong Number\n");
    printf("3. Palindrome\n");
    printf("4. Prime Number\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("7. Maximum of Three Numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter number of terms: ");
            scanf("%d", &n);
            fibonacci(n);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isArmstrong(num)) {
                printf("%d is an Armstrong number.\n", num);
            } else {
                printf("%d is not an Armstrong number.\n", num);
            }
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPalindrome(num)) {
                printf("%d is a palindrome.\n", num);
            } else {
                printf("%d is not a palindrome.\n", num);
            }
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num)) {
                printf("%d is a prime number.\n", num);
            } else {
                printf("%d is not a prime number.\n", num);
            }
            break;
        case 5:
            printf("Enter base: ");
            scanf("%d", &base);
            printf("Enter exponent: ");
            scanf("%d", &exp);
            printf("%d^%d = %d\n", base, exp, power(base, exp));
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("%d! = %d\n", num, factorial(num));
            break;
        case 7:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            printf("Maximum = %d\n", max(a, b, c));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
