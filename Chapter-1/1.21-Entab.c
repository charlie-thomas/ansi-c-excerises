#include <stdio.h>

#define TAB_SIZE 8 /* Number of blanks in a tab */

/* Replaces all tabs in input with the proper number of blanks until the next tab stop */
int main() {
    int c, adjecentBlanks;

    adjecentBlanks = 0;
    while ((c = getchar()) != EOF) {
        if (c == '-')
            ++adjecentBlanks;
        else {
            while (adjecentBlanks >= TAB_SIZE) {
                adjecentBlanks = adjecentBlanks - TAB_SIZE;
                putchar('\t');
            }
            for(int i = 0; i < adjecentBlanks; ++i){
                putchar('-');
            }
            adjecentBlanks = 0;
            putchar(c);
        }
    }
}

/* TODO: Calaculate the tab stops rather than just replacing blanks with a tab */