#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input values for arithmetic operations
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Sum
    printf("Sum: %d + %d = %d\n", num1, num2, num1 + num2);
    
    // Product
    printf("Product: %d * %d = %d\n", num1, num2, num1 * num2);
    
    // Subtraction
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    
    // Division
    if (num2 != 0) {
        printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
    
    // Modulus
    if (num2 != 0) {
        printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Error! Modulus by zero is not allowed.\n");
    }

    return 0;
}
