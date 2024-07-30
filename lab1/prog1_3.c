/*
Write a C program to extract each byte from a given number and store them in separate character variables and print the content of those variables.

*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int *ptr = &number;
    char *byte_ptr = (char *)ptr;
    for (int i = 0; i < 4; i++)
    {
        printf("Byte %d char: %c ASCII: %d\n", i + 1, byte_ptr[i], byte_ptr[i]);
    }

    return 0;
}