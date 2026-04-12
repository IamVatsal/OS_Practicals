#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <string.h>

#define SHM_SIZE 2048

int main() {
    int shmid;
    char *shm_ptr;

    // Create shared memory segment
    shmid = shmget(IPC_PRIVATE, SHM_SIZE, IPC_CREAT | 0666);
    if (shmid < 0) {
        perror("shmget failed");
        exit(1);
    }

    // Attach shared memory to parent
    shm_ptr = (char *)shmat(shmid, NULL, 0);
    if (shm_ptr == (char *) -1) {
        perror("shmat failed");
        exit(1);
    }

    // Write data into shared memory
    strcpy(shm_ptr, "Hello from Parent via Shared Memory!");

    pid_t pid = fork();

    if (pid > 0) {
        // Parent process
        printf("Parent wrote: %s\n", shm_ptr);

        wait(NULL); // wait for child

        // Detach and remove shared memory
        shmdt(shm_ptr);
        shmctl(shmid, IPC_RMID, NULL);
    } 
    else if (pid == 0) {
        // Child process
        sleep(1); // ensure parent writes first

        printf("Child read: %s\n", shm_ptr);

        shmdt(shm_ptr);
    } 
    else {
        perror("fork failed");
    }

    return 0;
}