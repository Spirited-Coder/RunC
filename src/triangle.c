#include <stdio.h>

void check_triangle_type(int a, int b, int c) {
    // Check for a valid triangle first (sum of any two sides should be greater than the third side)
    if (a + b > c && b + c > a && c + a > b) {
        // Check for Equilateral Triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Check for Isosceles Triangle
        else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        }
        // Check for Scalene Triangle
        else {
            printf("The triangle is Scalene.\n");
        }

        // Check if it's a Right-Angled Triangle (Pythagorean theorem)
        if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
            printf("The triangle is also a Right-Angled Triangle.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }
}

int main() {
    int a, b, c;

    // Input sides of the triangle
    printf("Enter the three sides of the triangle: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three integers.\n");
        return 1; // Exit with an error code if input is invalid
    }

    // Check the type of triangle
    check_triangle_type(a, b, c);

    return 0;
}

