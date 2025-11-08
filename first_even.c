#include <stdio.h>

int main() {
    int num;
    int first_even = 0;
    int found = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0 && found == 0) {
            first_even = num;
            found = 1;
        }
    }

    printf("\n--- Result ---\n");
    if (found) {
        printf("First even number: %d\n", first_even);
    } else {
        printf("No even number found.\n");
    }

    return 0;
}
