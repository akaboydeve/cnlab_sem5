#include <stdio.h>

int main(int argc, char *argv[])
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