#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int is_little_endian = 1;

    unsigned char *ptr = (unsigned char *)&num;
    if (*ptr == 0x78)
    {
        printf("System is little endian\n");
        is_little_endian = 1;
    }
    else
    {
        printf("System is big endian\n");
        is_little_endian = 0;
    }

    // print byte values along with location
    printf("Byte 1: %d at %p\n", ptr[0], &ptr[0]);
    printf("Byte 2: %d at %p\n", ptr[1], &ptr[1]);
    printf("Byte 3: %d at %p\n", ptr[2], &ptr[2]);
    printf("Byte 4: %d at %p\n", ptr[3], &ptr[3]);

    // Convert endianness
    if (is_little_endian)
    {
        num = ((num >> 24) & 0xFF) | ((num >> 8) & 0xFF00) | ((num << 8) & 0xFF0000) | ((num << 24) & 0xFF000000);
        printf("Converted to big endian\n");
    }
    else
    {
        num = ((num << 24) & 0xFF000000) | ((num << 8) & 0xFF0000) | ((num >> 8) & 0xFF00) | ((num >> 24) & 0xFF);
        printf("Converted to little endian\n");
    }

    // Print byte values along with location after conversion
    unsigned char *ptr_converted = (unsigned char *)&num;
    printf("Byte 1: %d at %p\n", ptr_converted[0], &ptr_converted[0]);
    printf("Byte 2: %d at %p\n", ptr_converted[1], &ptr_converted[1]);
    printf("Byte 3: %d at %p\n", ptr_converted[2], &ptr_converted[2]);
    printf("Byte 4: %d at %p\n", ptr_converted[3], &ptr_converted[3]);

    return 0;
}