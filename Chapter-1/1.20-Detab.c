#include <stdio.h>

#define TAB_SIZE 8 /* Number of blanks in a tab */

/* Replaces all tabs in input with the proper number of blanks until the next tab stop */
int main() {
    int c, col;

    col = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            while((col % TAB_SIZE) != 0) {
                putchar(' ');
                ++col;
            }
        else {
            ++col;
            putchar(c);
        }

        if (c == '\n')
            col = 0;
    }
}