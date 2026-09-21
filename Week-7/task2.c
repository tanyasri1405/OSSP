#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    char *path;
    char *path_copy;
    char *directory;
    char full_path[1024];
    struct stat file_info;

    if (argc != 2)
    {
        printf("Usage: %s <command>\n", argv[0]);
        return 1;
    }

    path = getenv("PATH");

    if (path == NULL)
    {
        printf("PATH variable not found.\n");
        return 1;
    }

    path_copy = strdup(path);

    if (path_copy == NULL)
    {
        perror("strdup");
        return 1;
    }

    directory = strtok(path_copy, ":");

    while (directory != NULL)
    {
        snprintf(full_path, sizeof(full_path),
                 "%s/%s", directory, argv[1]);

        if (stat(full_path, &file_info) == 0)
        {
            if (S_ISREG(file_info.st_mode) &&
                access(full_path, X_OK) == 0)
            {
                printf("Command found: %s\n", full_path);
                free(path_copy);
                return 0;
            }
        }

        directory = strtok(NULL, ":");
    }

    printf("Command not found: %s\n", argv[1]);

    free(path_copy);

    return 1;
}
