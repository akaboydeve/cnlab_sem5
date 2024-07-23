#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[])
{
    int a = argc > 1 ? atoi(argv[1]) : 1;
    int b = argc > 2 ? atoi(argv[2]) : 2;
    printf("Before swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    swap(&a, &b);
    printf("After swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}