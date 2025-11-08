#include <stdio.h>

int main() {
    int num;
    int even_numbers[10];
    int count = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_numbers[count] = num;
            count++;
        }
    }

    printf("\n--- Even Numbers ---\n");
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            printf("%d ", even_numbers[i]);
        }
        printf("\n");
    } else {
        printf("No even numbers entered.\n");
    }

    return 0;
}
