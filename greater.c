#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];  // Declare the array with user-defined size
    int max;

    // Ask user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize max with the first element of the array
    max = array[0];

    // Loop through the array to find the greatest number
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];  // Update max if a larger number is found
        }
    }

    // Output the greatest number
    printf("The greatest number in the array is: %d\n", max);

    return 0;
}

 
  

