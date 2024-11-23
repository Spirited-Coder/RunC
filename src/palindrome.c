#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Ask user for input
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;  // Exit if input is invalid
    }

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10;  // Remove the last digit from num
    }

    // Check if the original number is the same as the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
