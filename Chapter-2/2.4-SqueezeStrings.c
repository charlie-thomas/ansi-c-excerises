#include <stdio.h>

void squeeze(char s1[], char s2[]);
void squeezeChar(char s[], int c);
    
int main() {
    char s1[] = "Hello";
    char s2[] = "Charlie";

    printf("String 1: %s\nString 2: %s\n", s1, s2);
    squeeze(s1, s2);
    printf("Squeezed: %s\n", s1);
}

/* squeeze: deleted each character in s1 that matches any character in s2 */
void squeeze(char s1[], char s2[]) {
    for (int i = 0; s2[i] != '\0'; i++)
        squeezeChar(s1, s2[i]);
}

/* squeezeChar: delete all c from s (from book) */
void squeezeChar(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}