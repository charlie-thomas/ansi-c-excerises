#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);;
    
int main() {
    unsigned x = 211; // 1101 0011
    unsigned y = 84; // 0101 0100
    int p = 4;
    int n = 3;

    printf("x: %u\ty: %u\tp: %d\tn: %d\n", x, y, p, n);
    printf("Result: %u\n", setbits(x, p, n , y));
}

/* setbits: returns x with the n bits that begin at position p set to the rightmost n bits of y, 
    leaving the other bits unchanged. */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    /* Create a number with the right-most n bits set to 1 and all the rest 0
        1. ~0 Sets all bits to 1
        2. ~0 << n then shifts bits left by n, so the right-most n bits are 0 and the rest are 1
        3. ~(~0 << n) inverts all the bits into the desired bitmask */
    int bitmask = ~(~0 << n);

    /* Extract the rightmost-n bits of y using the bitmask and shift it left p bits */
    int a = (y & bitmask) << p;

    /* Mask out the bits of x to be replaced, by shifting the bitmask p bits to the left and
        inverting all bits */
    int b = (x & ~(bitmask << p));

    /* Return x with the n bits that begin at position p set to the rightmost n bits of y */
    return a | b;
}
