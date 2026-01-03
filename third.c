#include <stdio.h>

int main() {
    int age;
    char grade;
    float height;
    double salary;

    // Taking integer input
    printf("Enter your age:- ");
    scanf("%d", &age);

    // Taking character input
    printf("Enter your grade:- ");
    scanf(" %c", &grade);   // space before %c handles newline

    // Taking float input
    printf("Enter your height:- ");
    scanf("%f", &height);

    // Taking double input
    printf("Enter your salary:- ");
    scanf("%lf", &salary);

    // Displaying the entered values
    printf("\n--- User Input Details ---\n");
    printf("Age    : %d\n", age);
    printf("Grade  : %c\n", grade);
    printf("Height : %.2f\n", height);
    printf("Salary : %.2lf\n", salary);

    return 0;
}
