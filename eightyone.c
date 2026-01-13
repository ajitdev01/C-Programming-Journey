#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s = {101, 88.5};

    fp = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    struct Student r;
    fp = fopen("student.dat", "rb");
    fread(&r, sizeof(r), 1, fp);
    fclose(fp);

    printf("ID: %d, Marks: %.2f\n", r.id, r.marks);
    return 0;
}
