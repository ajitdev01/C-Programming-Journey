#include <stdio.h>

// Recursive factorial
int factorialRec(int n) {
    if (n == 0)
        return 1;
    return n * factorialRec(n - 1);
}

// Iterative factorial
int factorialItr(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 5;

    printf("Recursive Factorial of %d = %d\n", n, factorialRec(n));
    printf("Iterative Factorial of %d = %d\n", n, factorialItr(n));

    return 0;
}
