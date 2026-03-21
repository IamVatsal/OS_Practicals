#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t pid = fork();

    if (pid > 0) {
        // Parent process
        printf("Parent Process ID: %d\n", getpid());
        printf("Child Process ID: %d\n", pid);
        sleep(10); // Sleep to allow child process to become a zombie
    } else if (pid == 0) {
        // Child process
        printf("Child Process ID: %d\n", getpid());
        exit(0); // Child process exits immediately, becoming a zombie
    } else {
        // Fork failed
        perror("Fork failed");
        return 1;
    }
    return 0;
}