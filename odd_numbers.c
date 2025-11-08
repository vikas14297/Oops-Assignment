#include <stdio.h>

int main() {
    int i;

    printf("Odd numbers between 1 to 20:\n");

    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
