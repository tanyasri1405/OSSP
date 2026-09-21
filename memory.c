#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    // malloc()
    int *a = (int *)malloc(5 * sizeof(int));

    if (a == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }

    for (i = 0; i < 5; i++)
    {
        a[i] = i + 1;
    }

    printf("Values using malloc:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // calloc()
    int *b = (int *)calloc(5, sizeof(int));

    if (b == NULL)
    {
        free(a);
        printf("calloc failed\n");
        return 1;
    }

    printf("Values using calloc:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    // realloc()
    a = (int *)realloc(a, 10 * sizeof(int));

    if (a == NULL)
    {
        free(b);
        printf("realloc failed\n");
        return 1;
    }

    for (i = 5; i < 10; i++)
    {
        a[i] = i + 1;
    }

    printf("Values after realloc:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // free()
    free(a);
    free(b);

    printf("Memory freed successfully.\n");

    return 0;
}
