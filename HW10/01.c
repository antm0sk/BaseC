#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[101];
    if (fgets(str, sizeof(str), input) != NULL) {
        size_t len = strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[--len] = '\0';
        }
        fprintf(output, "%s, %s, %s %zu\n", str, str, str, len);
    }
    fclose(input);
    fclose(output);
    return 0;
}
