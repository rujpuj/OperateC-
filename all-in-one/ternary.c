#include <stdio.h>

int main() {
    int a, b, max, min;

    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Find maximum using ternary operator
    max = (a > b) ? a : b;
    printf("The maximum value is: %d\n", max);

    // Find minimum using ternary operator
    min = (a < b) ? a : b;
    printf("The minimum value is: %d\n", min);

    // Check for equality using ternary operator
    (a == b) ? printf("%d is equal to %d\n", a, b) : printf("%d is not equal to %d\n", a, b);

    return 0;
}
