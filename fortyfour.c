#include <stdio.h>

int main() {
    int a = 50;
    int *p = &a;
    int **pp = &p;

    printf("Value of a        : %d\n", a);
    printf("Value via *p      : %d\n", *p);
    printf("Value via **pp    : %d\n", **pp);

    return 0;
}
