#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("encrypted.txt", "w");
    char ch;

    while ((ch = fgetc(in)) != EOF)
        fputc(ch + 1, out);

    fclose(in);
    fclose(out);
    printf("File Encrypted\n");
    return 0;
}
