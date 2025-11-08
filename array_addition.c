#include <stdio.h>

int main() {
    int ar[10];
    int i, sum = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &ar[i]);
        sum += ar[i];
    }

    printf("\nArray elements: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", ar[i]);
    }

    printf("\n\nSum of all elements: %d\n", sum);

    return 0;
}
