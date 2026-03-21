#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        sleep(10); // Simulate some work
        printf("Child Process ID: %d, New Parent Process ID: %d\n", getpid(), getppid());
    } else {
        // Parent process
        sleep(5); // Simulate some work
        printf("Parent Process ID: %d, Child Process ID: %d\n", getpid(), pid);
    }

    return 0;
}