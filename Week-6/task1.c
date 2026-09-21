#include <stdio.h>
#include <string.h>

int main()
{
    char input1[] = "Hello\\ World";
    char input2[] = "Hello\\$World";
    char input3[] = "Hello\\&World";
    char input4[] = "Hello\\\"World";

    printf("Escaped space       : %s\n", input1);
    printf("Escaped $ symbol    : %s\n", input2);
    printf("Escaped & symbol    : %s\n", input3);
    printf("Escaped quote       : %s\n", input4);

    printf("\nEscape characters preserve special characters.\n");

    return 0;
}

