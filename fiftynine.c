#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *fp = fopen("data.txt", "r");

    if (!fp) {
        perror("File Error");
        printf("Error Code: %d\n", errno);
        printf("Message: %s\n", strerror(errno));
        return 1;
    }

    fclose(fp);
    return 0;
}
