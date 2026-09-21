#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int global_var = 10;
static int static_var = 20;

void function()
{
    printf("This is a code/function address\n");
}

int main()
{
    int stack_var = 30;
    int *heap_var;

    // Allocate memory in heap
    heap_var = (int *)malloc(sizeof(int));

    if (heap_var == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    *heap_var = 40;

    printf("\n--- Memory Addresses ---\n");

    // Code address
    printf("Code address   : %p\n", (void *)function);

    // Global variable address
    printf("Global address : %p\n", (void *)&global_var);

    // Static variable address
    printf("Static address : %p\n", (void *)&static_var);

    // Heap variable address
    printf("Heap address   : %p\n", (void *)heap_var);

    // Stack variable address
    printf("Stack address  : %p\n", (void *)&stack_var);

    // Print process ID
    printf("\nProcess ID (PID): %d\n", getpid());

    printf("\nPress Enter to terminate the program...\n");
    getchar();

    free(heap_var);

    return 0;
}
