#include <stdio.h>
#include <ctype.h>
#include <string.h>

void to_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    if (str[len - 1] == '.') {
        str[len - 1] = '\0';
    }

    to_uppercase(str);
    printf("%s\n", str);
    return 0;
}
