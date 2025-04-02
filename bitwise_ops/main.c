/*
Author: Felipe Cardoso
Title: Bitwise Ops
Objective: Fixate the functionality of bitwise operators
Date: 18/03/2025
*/

#include <stdio.h>

int main(void)
{
    int a = 10, b = 5, c = 137;
    // a -> bit = 0000 1010
    // b -> bit = 0000 0101
    // c -> bit = 1000 1001

    // Bitwise AND
    printf("%d\n", a & b);
    printf("%d\n", a & c);
    printf("%d\n", b & c);

    // Bitwise OR
    printf("%d\n", a | b);
    printf("%d\n", a | c);
    printf("%d\n", b | c);

    // Bitwise XOR
    printf("%d\n", a ^ b);
    printf("%d\n", a ^ c);
    printf("%d\n", b ^ c);

    // Bitwise First Complement
    printf("%d\n", ~a);
    printf("%d\n", ~b);
    printf("%d\n", ~c);

    // Bitwise Leftshift
    printf("%d\n", a << b);
    // printf("%d\n", b << a);
    printf("%d\n", a << c);
    printf("%d\n", b << c);

    // Bitwise Rightshift
    printf("%d\n", a >> b);
    // printf("%d\n", b >> a);
    printf("%d\n", a >> c);
    printf("%d\n", b >> c);
    return 0;
}
