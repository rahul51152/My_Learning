#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t child_pid;

    child_pid = fork();

    if (child_pid < 0) {
        perror("fork");
        return 1; 
    }

    else if (child_pid == 0) {
        printf("Child process (PID: %d)\n", getpid());
    }

    else {
        printf("Parent process (PID: %d)\n", getpid());
        printf("Child process ID: %d\n", child_pid);
    }

    return 0;
}

