#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main() {
    char original[32] = "Hello!\tMy namee\b is\nCharlie\n";
    char escaped[32];

    escape(escaped, original);
    printf("escaped: %s\n", escaped);
    unescape(original, escaped);
    printf("unescaped: %s", original);

}

/* escape: converts characters like newline and tab into visible escape sequences like
     \n and \t as it copies the string t to s */
void escape(char s[], char t[]) {
    int i, j;
    for (i = j = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;

            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            
            case '\b':
                s[j++] = '\\';
                s[j++] = 'b';
                break;

            case '\\':
                s[j++] = '\\';
                s[j++] = '\\';
                break;

            case '\r':
                s[j++] = '\\';
                s[j++] = 'r';
                break;
            
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = t[i];
}

/* unescape: converts escape sequences such as \n and \t back into the real characters */
void unescape(char s[], char t[]) {
    int i, j;
    for (i = j = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
            case '\\':
                switch (t[++i]) {
                    case 'n':
                        s[j++] = '\n';
                        break;

                    case 't':
                        s[j++] = '\t';
                        break;
                    
                    case 'b':
                        s[j++] = '\b';
                        break;

                    case '\\':
                        s[j++] = '\\';
                        break;

                    case 'r':
                        s[j++] = '\r';
                        break;
                    
                    default:
                        s[j++] = '\\';
                        s[j++] = t[i];
                        break;
                }
                break;

            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = t[i];
}



