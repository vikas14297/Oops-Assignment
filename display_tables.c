#include <stdio.h>

int main() {
    int num;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        printf("\nTable of %d:\n", num);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", num, j, num * j);
        }
        printf("\n");
    }

    return 0;
}
