#include <stdio.h>

int hextoi(char hex[]);

int main() {
    printf("Hex Input: 0x291B\tInt Output: %d\n", hextoi("0x291B"));
    printf("Hex Input: 0X291B\tInt Output: %d\n", hextoi("0X291B"));
    printf("Hex Input: 291B\t\tInt Output: %d\n", hextoi("291B"));    
}

int hextoi(char hex[]) {
    int res, pos, digit;
    
    res = pos = 0;
    if (hex[0] == '0' && (hex[1] == 'X' || hex[1] == 'x'))
        pos = 2;

    for (int i = pos; hex[i] != '\0'; ++i) {
        if (hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            digit = hex[i] - 'a' + 10;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;

        res = (16 * res) + digit;
    }
    
    return res;
}