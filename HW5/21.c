#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    while ((ch = getchar()) != '.') {
        if (isupper(ch)) {
            ch = tolower(ch);
        }
        putchar(ch);
    }
    putchar('\n');

    return 0;
}
