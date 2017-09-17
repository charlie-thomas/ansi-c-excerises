#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);
void reverse(char s[], int len);

/* Print out lines from input after reversing them */
int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0){
        reverse(line, len);
        printf("%s", line);
    }
}

/* reverse: Reverse a character string s */
void reverse(char s[], int len) {
    int c;

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/* getline: read a line into s, return length */
int getLine(char s[],int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}