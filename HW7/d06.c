#include <stdio.h>

void reverse_string() {
    char c = getchar();
    if (c != '.') {
        reverse_string();
        putchar(c);
    }
}

int main() {
    reverse_string();
    putchar('\n');
    return 0;
}
