#include <stdio.h>
#include <string.h>

void compress_string(char s[], char result[]) {
    int count = 1, index = 0;

    for (int i = 1; s[i] != '.'; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            index += sprintf(&result[index], "%c%d", s[i - 1], count);
            count = 1;
        }
    }

    index += sprintf(&result[index], "%c%d", s[strlen(s) - 2], count);
    result[index] = '\0';
}

int main() {
    char input[1001], output[2002];
    scanf("%1000s", input);
    compress_string(input, output);
    printf("%s\n", output);
    return 0;
}
