#include <stdio.h>

#define INT_BITS 8 /* How many bits we are using in the int being rotated */

unsigned rightrot(unsigned x, int n);
    
int main() {
    unsigned x = 211; // 1101 0011
    int n = 3;

    printf("x: %u\tn: %d\n", x, n);
    printf("Result: %u\n", rightrot(x, n));
}

/* rightrot: returns the value of the integer x rotated to the right by n positions */
unsigned rightrot(unsigned x, int n) {
    /* Create a bitmask with the right-most n bits set to 1 and the rest set to 0 */
    int bitmask = ~(~0 << n);

    /*  Get the right-most n bits of x, and shift them to the left side (so they have looped) */
    int rotated =  (x & bitmask) << (INT_BITS - n);

    /* Shift everything n bits to the right, leaving 0s as the left-most bits */
    int shifted = x >> n;

    /* Return the union of rotated (originally the right-most n bits, now on the left), and
        shifted (originally the left-most bits, now on the right) */
    return shifted | rotated;

}
