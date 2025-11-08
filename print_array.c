#include <stdio.h>

int main() {
    int ar[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i);
        scanf("%d", &ar[i]);
    }

    printf("\nArray elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}
