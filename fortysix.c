#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter roll no: ");
    // Check if input is a valid integer
    if (scanf("%d", &s.roll) != 1) {
        printf("Invalid input for roll number.\n");
        return 1;
    }

    // Clear the input buffer (removes the newline left by scanf)
    while (getchar() != '\n');

    printf("Enter your name: ");
    // Use fgets to allow spaces and prevent overflow
    fgets(s.name, sizeof(s.name), stdin);
    // Remove the trailing newline character added by fgets
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter your marks: ");
    if (scanf("%f", &s.marks) != 1) {
        printf("Invalid input for marks.\n");
        return 1;
    }

    printf("\n--- Student Details ---\n");
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);

    return 0;
}