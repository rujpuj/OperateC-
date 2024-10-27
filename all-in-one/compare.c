#include <stdio.h>

int main() {
    int a, b;

    // Input values for comparison
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Equal to
    if (a == b) {
        printf("%d is equal to %d\n", a, b);
    } else {
        printf("%d is not equal to %d\n", a, b);
    }

    // Not equal to
    if (a != b) {
        printf("%d is not equal to %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }

    // Less than
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is not less than %d\n", a, b);
    }

    // Greater than
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is not greater than %d\n", a, b);
    }

    // Less than or equal to
    if (a <= b) {
        printf("%d is less than or equal to %d\n", a, b);
    } else {
        printf("%d is not less than or equal to %d\n", a, b);
    }

    // Greater than or equal to
    if (a >= b) {
        printf("%d is greater than or equal to %d\n", a, b);
    } else {
        printf("%d is not greater than or equal to %d\n", a, b);
    }

    return 0;
}
