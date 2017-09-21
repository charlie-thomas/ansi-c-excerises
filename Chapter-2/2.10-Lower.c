#include <stdio.h>

int lower(int c);
    
int main() {
    int c;

    while((c = getchar()) != EOF)
        putchar(lower(c));
}

/* lower: convert c to lower case; ASCII only */
int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}