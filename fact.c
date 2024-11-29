#include <stdio.h>
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int start, end;
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        printf("Factorial of %d = %llu\n", i, factorial(i));
    }

    return 0;
}
