#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    // Asking user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2); // Print the first two terms

    // Loop to calculate and print the next terms
    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2; // Calculate the next term
        printf(", %d", nextTerm); // Print the next term
        t1 = t2;  // Move t1 to the next position
        t2 = nextTerm;  // Move t2 to the next position
    }

    return 0;
}

