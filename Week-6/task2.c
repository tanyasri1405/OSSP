#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;

    printf("Parent process started.\n");
    printf("Parent PID: %d\n", getpid());

    pid = fork();

    if (pid < 0)
    {
        perror("fork failed");
        return 1;
    }

    if (pid == 0)
    {
        // Child process
        printf("\nChild process created.\n");
        printf("Child PID: %d\n", getpid());

        printf("Executing 'ls -l'...\n\n");

        execl("/bin/ls", "ls", "-l", NULL);

        // Executes only if execl() fails
        perror("execl failed");
        exit(1);
    }
    else
    {
        // Parent process
        printf("\nParent waiting for child...\n");

        wait(NULL);

        printf("Child process completed.\n");
        printf("Parent process finished.\n");
    }

    return 0;
}
