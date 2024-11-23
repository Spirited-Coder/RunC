#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask user for input
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;  // Exit if input is invalid
    }

    // Check if the user wants to display at least one term
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Fibonacci Series: \n");

        // Print the first two terms
        if (n >= 1)
            printf("%d ", first);
        if (n >= 2)
            printf("%d ", second);

        // Print the rest of the series
        for (int i = 3; i <= n; i++) {
            next = first + second;  // Calculate the next term
            printf("%d ", next);  // Print the next term
            first = second;  // Update first to second
            second = next;   // Update second to next
        }

        printf("\n");
    }

    return 0;
}
