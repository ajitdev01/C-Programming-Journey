#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float score;
};

int main() {
    struct Student s1;

    printf("Enter your id: ");
    scanf("%d", &s1.id);

    printf("Enter your name: ");
    // Changed %d to %s and removed &
    scanf("%s", s1.name);

    printf("Enter your score: ");
    scanf("%f", &s1.score);

    printf("\n--- Student Details ---\n");
    printf("Student id: %d\n", s1.id);
    printf("Your name: %s\n", s1.name);
    printf("Your Marks: %.2f\n", s1.score);

    return 0;
}