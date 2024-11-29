#include <stdio.h>

int main() {
    int num;
    long long product = 1;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 5 == 0) {
            printf("Number divisible by 5 encountered. Stopping the input.\n");
            break;
        }
        product *= num;
    }
    printf("The product of the entered numbers is: %lld\n", product);
    return 0;
}

