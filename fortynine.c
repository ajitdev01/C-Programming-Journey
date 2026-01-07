#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    // 1. Get user input and Write to Binary File
    fp = fopen("record.txt", "wb");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("How many students do you want to enter? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &s.roll);
        printf("Enter Marks: ");
        scanf("%f", &s.marks);

        // Write the individual structure to the file
        fwrite(&s, sizeof(struct Student), 1, fp);
    }
    fclose(fp);
    printf("\nData successfully saved to 'record.dat'\n");

    // 2. Read back from Binary File to verify
    printf("\n--- Displaying Records from File ---\n");
    fp = fopen("record.dat", "rb");

    // Read until the end of the file
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Roll: %d, Marks: %.2f\n", s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}