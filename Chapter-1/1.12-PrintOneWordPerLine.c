#include <stdio.h>

int main() {

    int c;
    int flag = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t')
            flag = 0;
        else if (flag == 0){
            putchar('\n');
            flag = 1;
        }

        putchar(c);
    }
}