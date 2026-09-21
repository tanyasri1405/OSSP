#include <stdio.h>
#include <string.h>

int main()
{
    char *variable = "WORLD";

    char single_quote[] = "$variable";
    char normal_string[] = "Hello WORLD";

    printf("Variable value       : %s\n", variable);
    printf("Inside single quotes : '%s'\n", single_quote);
    printf("Normal string        : %s\n", normal_string);

    printf("\nSingle quotes preserve literal content.\n");
    printf("The text $variable is not expanded.\n");

    return 0;
}

