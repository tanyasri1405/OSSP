#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int *data = malloc(sizeof(int));

    if (data == NULL)
    {
        perror("malloc");
        return 1;
    }

    *data = 100;

    printf("Before fork:\n");
    printf("PID = %d, Address = %p, Value = %d\n",
           getpid(), (void *)data, *data);

    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork");
        free(data);
        return 1;
    }

    if (pid == 0)
    {
        printf("\nChild before modification:\n");
        printf("PID = %d, Address = %p, Value = %d\n",
               getpid(), (void *)data, *data);

        *data = 200;

        printf("\nChild after modification:\n");
        printf("PID = %d, Address = %p, Value = %d\n",
               getpid(), (void *)data, *data);

        free(data);
    }
    else
    {
        wait(NULL);

        printf("\nParent after child modification:\n");
        printf("PID = %d, Address = %p, Value = %d\n",
               getpid(), (void *)data, *data);

        free(data);
    }

    return 0;
}

