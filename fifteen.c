#include <stdio.h>

int main() {
    int choice ;
    printf("Choose a number 1 to 3  :-");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
            printf("Option One\n");
            break;
        case 2:
            printf("Option Two\n");
            break;
        case 3:
            printf("Option Three\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
