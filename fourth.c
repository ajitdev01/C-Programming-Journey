#include <stdio.h>

int main() {
    // Declaring variables of different data types
    char ch = 'A';
    int num = 10;
    float f = 3.14f;
    double d = 99.99;

    // Display values
    printf("Values:\n");
    printf("Character : %c\n", ch);
    printf("Integer   : %d\n", num);
    printf("Float     : %.2f\n", f);
    printf("Double    : %.2lf\n\n", d);

    // Display memory size (bytes)
    printf("Memory Size (in bytes):\n");
    printf("char   : %lu byte\n", sizeof(char));
    printf("int    : %lu bytes\n", sizeof(int));
    printf("float  : %lu bytes\n", sizeof(float));
    printf("double : %lu bytes\n", sizeof(double));

    return 0;
}
