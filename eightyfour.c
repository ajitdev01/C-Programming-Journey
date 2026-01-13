#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handle_signal(int sig) {
    printf("\nSignal %d received\n", sig);
}

int main() {
    signal(SIGINT, handle_signal);

    while (1) {
        printf("Running... Press Ctrl+C\n");
        sleep(2);
    }
    return 0;
}
