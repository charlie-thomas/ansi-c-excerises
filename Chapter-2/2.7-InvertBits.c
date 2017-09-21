#include <stdio.h>

unsigned invert(unsigned x, int p, int n);
    
int main() {
    unsigned x = 211; // 1101 0011
    int p = 4;
    int n = 3;

    printf("x: %u\tp: %d\tn: %d\n", x, p, n);
    printf("Result: %u\n", invert(x, p, n));
}

/* invert: returns x with the n bits that begin at position p inverted */
unsigned invert(unsigned x, int p, int n) {
    /* Create a bitmask with the right-most n bits set to 1 and the rest set to 0 */
    int bitmask = ~(~0 << n);

    /* Calculate a value representing n digits starting from position p */
    int nBitsAtP = p+1-n;

    /* Left shift the bitmask by nBitsAtP, and then use the bitwise XOR operator to invert the desired bits */
    return x ^ (bitmask << nBitsAtP);
}
