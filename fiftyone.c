#include <stdio.h>

int main() {
    unsigned int a = 5;   // 0101
    unsigned int b = 9;   // 1001

    printf("AND  : %d\n", a & b);
    printf("OR   : %d\n", a | b);
    printf("XOR  : %d\n", a ^ b);
    printf("NOT a: %d\n", ~a);
    printf("Left Shift (a<<1): %d\n", a << 1);
    printf("Right Shift (b>>1): %d\n", b >> 1);

    // Bit masking example
    unsigned int flags = 0;
    flags |= (1 << 2);   // set bit 2
    flags &= ~(1 << 2);  // clear bit 2

    return 0;
}
