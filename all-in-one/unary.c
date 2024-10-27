#include <stdio.h>

int main() {
    int x = 10;

    printf("Initial value of x: %d\n", x);

    // Unary increment
    x++;
    printf("After incrementing, x: %d\n", x);

    // Unary decrement
    x--;
    printf("After decrementing, x: %d\n", x);

    // Unary negation
    printf("Negation of x: %d\n", -x);

    return 0;
}
