#include <stdio.h>

int main() {
    // Integer type
    int age = 19;

    // Character type
    char grade = 'A';

    // Floating point types
    float height = 5.9f;      // float (single precision)
    double salary = 80000.75; // double (double precision)

    // Output all values
    printf("Integer value (age): %d\n", age);
    printf("Character value (grade): %c\n", grade);
    printf("Float value (height): %.2f\n", height);
    printf("Double value (salary): %.2lf\n", salary);

    return 0;
}
