#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("Logical Operators Example\n\n");

    printf("(a > 5 && b < 10) : %d\n", (a > 5 && b < 10));
    printf("(a > 5 || b > 10) : %d\n", (a > 5 || b > 10));
    printf("!(a == b)        : %d\n", !(a == b));

    return 0;
}
