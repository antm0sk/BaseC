#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrom(const char *str) {
    size_t len = strlen(str);
    for (size_t i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001];

    if (fgets(str, sizeof(str), input) != NULL) {
        size_t len = strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[--len] = '\0';
        }
        fprintf(output, is_palindrom(str) ? "YES\n" : "NO\n");
    }

    fclose(input);
    fclose(output);
    return 0;
}
