#include <stdio.h>

int main() {
    int a = 5;

    printf("Increment & Decrement Example\n\n");

    printf("Pre-increment (++a)  : %d\n", ++a);
    printf("Post-increment (a++) : %d\n", a++);
    printf("After post-increment : %d\n\n", a);

    printf("Pre-decrement (--a)  : %d\n", --a);
    printf("Post-decrement (a--) : %d\n", a--);
    printf("After post-decrement : %d\n", a);

    return 0;
}
