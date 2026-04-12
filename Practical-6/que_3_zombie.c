#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        // Parent process
        printf("Parent PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);

        sleep(2); // Give child time to exit

        printf("\nChecking process table (look for Z state):\n");
        system("ps -l");  // Show process status

        sleep(10); // Keep parent alive so zombie persists
    } 
    else if (pid == 0) {
        // Child process
        printf("Child PID: %d exiting...\n", getpid());
        exit(0); // Child becomes zombie
    } 
    else {
        perror("Fork failed");
    }

    return 0;
}