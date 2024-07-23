/*
Write a C Program to enter a number and store the number across the following structure and print the content of each member of the structure.
Then aggregate each member of the structure to form the original number and print the same.
struct pkt{}
char ch.l;
char ch2(2);
char ch3;
｝
*/
#include <stdio.h>
#include <stdlib.h>

struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};

int main(int argc, char *argv[])
{
    struct pkt p1;
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    p1.ch1 = (char)(x & 0xFF);
    p1.ch2[0] = (char)((x >> 8) & 0xFF);
    p1.ch2[1] = (char)((x >> 16) & 0xFF);
    p1.ch3 = (char)((x >> 24) & 0xFF);

    printf("Packet: %c%c%c%c\n", p1.ch1, p1.ch2[0], p1.ch2[1], p1.ch3);

    // aggregate the characters to form the integer
    int y = (int)p1.ch1 | ((int)p1.ch2[0] << 8) | ((int)p1.ch2[1] << 16) | ((int)p1.ch3 << 24);
    printf("Number: %d\n", y);

    if (x == y)
    {
        printf("Success\n");
    }
    else
    {
        printf("Failed");
    }

    return 0;
}