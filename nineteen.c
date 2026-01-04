#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5)
            continue;   // skips 5

        if (i == 9)
            break;      // stops loop

        printf("%d ", i);
    }

    return 0;
}
