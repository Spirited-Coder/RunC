#include <stdio.h>

int main() {
    int n, sum;

    // Ask the user for the input
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;  // Exit if input is invalid
    }

    // Check if the entered number is a positive integer
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Formula for the sum of the first n natural numbers
    sum = n * (n + 1) / 2;

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
