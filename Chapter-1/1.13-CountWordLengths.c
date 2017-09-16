#include <stdio.h>

#define NO_WORDS 10 /* Number of words */

int main() {
    int c, count;
    int lengths[NO_WORDS] = {0};

    /* Count lengths of each word */
    count = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
            count++;
        else
            lengths[count]++;
    }

    /* Print out histogram of word lengths */
    for (int i = 0; i < NO_WORDS; i++) {
        for (int j = 0; j < lengths[i]; j++)
            putchar('*');
        putchar('\n');
    }

}