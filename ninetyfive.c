#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter Number one: ");
    scanf("%d", &a);

    printf("Enter Number Two: ");
    scanf("%d", &b);

    printf("Enter Operation (+, -, *, /): ");
    // Remember the space before %c to clear the buffer!
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;

        case '-':
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;

        case '*':
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;

        case '/':
            // Check for division by zero to prevent crashes!
            if (b != 0) {
                printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}