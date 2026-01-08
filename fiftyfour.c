#include <stdio.h>

static int counter = 0;

void increment() {
    counter++;
    printf("Counter: %d\n", counter);
}

int main() {
    increment();
    increment();
    increment();
    return 0;
}
