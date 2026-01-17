#include <stdio.h>

int main() {
    FILE *fp = fopen("config.txt", "r");
    char key[50], value[50];

    if (!fp) {
        printf("Config file not found\n");
        return 1;
    }

    while (fscanf(fp, "%[^=]=%s\n", key, value) != EOF)
        printf("Key: %s | Value: %s\n", key, value);

    fclose(fp);
    return 0;
}
