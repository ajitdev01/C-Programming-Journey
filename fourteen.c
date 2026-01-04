#include <stdio.h>

int main() {
    int age = 20;
    int hasID = 1;

    if (age >= 18) {
        if (hasID)
            printf("Eligible to vote\n");
        else
            printf("ID required\n");
    } else {
        printf("Not eligible to vote\n");
    }

    return 0;
}
