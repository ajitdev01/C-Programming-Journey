#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter A numbers: ");
    scanf("%d", &a);
    printf("Enter B numbers: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d", a, b);
    return 0;
}

