#include <windows.h>
#include <stdio.h>

int main() {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    if (!CreateProcess(
        NULL,
        "notepad.exe",
        NULL,
        NULL,
        FALSE,
        0,
        NULL,
        NULL,
        &si,
        &pi)) {
        printf("CreateProcess failed\n");
        return 1;
        }

    printf("Parent process created a child process\n");

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return 0;
}
