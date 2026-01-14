#include <stdio.h>

/* Function prototype */
int add_numbers(int a, int b);

int main(void) {
    int result = add_numbers(5, 7);
    printf("Result = %d\n", result);
    return 0;
}

/* Function definition */
int add_numbers(int a, int b) {
    return a + b;
}
