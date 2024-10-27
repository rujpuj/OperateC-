#include <stdio.h>

int main() {
    int a = 7, b = 6;

    // Bitwise AND
    printf("a & b = %d\n", a & b); // 0111 & 0011 = 0001

    // Bitwise OR
    printf("a | b = %d\n", a | b); // 0111 | 0011 = 0111

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b); // 0101 ^ 0011 = 0110

    // Bitwise NOT
    printf("~a = %d\n", ~a); // ~0111 = 1000 (two's complement: 1000 = -8)



    return 0;
}
