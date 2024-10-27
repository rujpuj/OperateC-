#include <stdio.h>

int main() {
    int x = 10, y = 5;

    printf("Initial values:\n");
    printf("x = %d, y = %d\n", x, y);

    // Simple assignment
    x = y;
    printf("\nx = y -> x = %d\n", x);

    // Add and assign
    x += y;
    printf("x += y -> x = %d\n", x);

    // Subtract and assign
    x -= y;
    printf("x -= y -> x = %d\n", x);

    // Multiply and assign
    x *= y;
    printf("x *= y -> x = %d\n", x);

    // Divide and assign
    x /= y;
    printf("x /= y -> x = %d\n", x);

    // Modulus and assign
    x = 10; // reset x to 10
    x %= y;
    printf("x %%= y -> x = %d\n", x); // Note: %% is used to print the % character

    return 0;
}
