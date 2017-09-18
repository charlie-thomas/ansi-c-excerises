#include <stdio.h>
#include <limits.h>

int main() {
    printf("char min: %d\n", CHAR_MIN);
    printf("char max: %d\n\n", CHAR_MAX);
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n\n", SCHAR_MAX);
    printf("unsigned char max: %u\n\n\n", UCHAR_MAX);

    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n\n", INT_MAX);
    printf("unsigned int max: %u\n\n\n", UINT_MAX);    

    printf("long min: %ld\n", LONG_MIN);
    printf("long max: %ld\n\n", LONG_MAX);
    printf("unsigned long max: %lu\n\n\n", ULONG_MAX);    

    printf("short min: %d\n", SHRT_MIN);
    printf("short max: %d\n\n", SHRT_MAX);
    printf("unsigned short max: %u", USHRT_MAX);
}