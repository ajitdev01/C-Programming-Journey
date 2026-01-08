#include <stdio.h>

void update(int *p) {
    *p = *p + 10;
}

int main() {
    int value = 20;
    int *ptr = &value;
    int **pptr = &ptr;

    update(ptr);
    printf("Value: %d\n", **pptr);

    return 0;
}
