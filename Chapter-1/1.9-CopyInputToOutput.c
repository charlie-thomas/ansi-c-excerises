#include <stdio.h>

int main() {

    int c;
    int flag = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ' && flag)
            continue;
        
        putchar(c);
        flag = c == ' ';
    }
}