#include <stdio.h>

int bitcount(unsigned);
    
int main() {
    unsigned x = 211; // 1101 0011

    printf("x: %u\tBit Count: %d\n", x, bitcount(x));
}

/* bitcount: count 1 bits in x */
int bitcount(unsigned x) {
    int b;

    for(b = 0; x != 0; x &= (x-1))
        b++;
    return b;
}