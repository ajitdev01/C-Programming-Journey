#include  <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines =0;

    fp=fopen("input.txt","r");
    if (!fp) {
        printf("File not found\n");
        return  1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(fp);
    printf("Number of lines: %d\n", lines);
    return 0;
}