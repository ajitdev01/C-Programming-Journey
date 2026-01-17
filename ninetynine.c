#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pass[50];
    int upper = 0, digit = 0;

    printf("Enter password: ");
    scanf("%s", pass);

    for (int i = 0; i < strlen(pass); i++) {
        if (isupper(pass[i])) upper = 1;
        if (isdigit(pass[i])) digit = 1;
    }

    if (strlen(pass) >= 8 && upper && digit)
        printf("Strong Password\n");
    else
        printf("Weak Password\n");

    return 0;
}
