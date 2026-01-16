#include <stdio.h>
int main() {
    float blance = 5000 , deposit;

    printf("Enter Despsite Amount: ");
    scanf("%f", &deposit);

    blance += deposit;

    printf("Updated Balance :- %.2f",blance);
    return 0;
}