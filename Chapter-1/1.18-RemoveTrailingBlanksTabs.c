#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);

/* Print out lines from input after removing trailing whitespace */
int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0)
        printf("%s", line);
}

/* getline: read a line into s, remove trailing whitespace, and return length */
int getLine(char s[],int lim) {
    int c, i, whitespace, len;

    whitespace = 0;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        if (c == ' ' || c == '\t')
            ++whitespace;
        else
            whitespace = 0;
        s[i] = c;
    }

    len = i-whitespace;
    if (c == '\n') {
        s[len] = c;
        ++i;
    }

    s[len] = '\0';
    return len;
}