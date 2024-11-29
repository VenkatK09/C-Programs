#include <stdio.h>

int main() {
    int start, end, i, j;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);
    for (i = start; i <= end; i++) {
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
        }

    return 0;
}
