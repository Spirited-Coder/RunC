#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask user for input
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;  // Exit if input is invalid
    }

    // Check if number is less than 2 (not prime)
    if (num <= 1) {
        isPrime = 0;
    }

    // Check if the number is divisible by any number from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
