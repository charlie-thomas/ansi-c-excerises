#include <stdio.h>

int any(char s1[], char s2[]);
    
int main() {
    char s1[] = "Hello";
    char s2[] = "Charlie";

    printf("String 1: %s\nString 2: %s\n", s1, s2);
    printf("Location of first character found: %d\n", any(s1, s2));;
}

int any(char s1[], char s2[]) {
    for (int i = 0; s1[i] != '\0'; i++)
        for (int j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
                return i;
    return -1;
}