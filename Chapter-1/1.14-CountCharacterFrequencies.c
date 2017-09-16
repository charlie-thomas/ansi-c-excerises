#include <stdio.h>

#define NO_CHARS 128 /* Number of characters */
#define MIN 32

int main() {

    int c;
    int characters[NO_CHARS] = {0};

    /* Count each character occurence */
    while ((c = getchar()) != EOF){
        characters[c]++;
    }
    
    /* Print out histogram of character frequencies */
    for (int i = MIN; i < NO_CHARS; i++) {
        printf("%c: ", i);
        for (int j = 0; j < characters[i]; j++)
            putchar('*');
        putchar('\n');
    }
}