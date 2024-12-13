#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001];
    bool seen[256] = {0};

    if (fgets(str, sizeof(str), input) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] != ' ' && !seen[(unsigned char)str[i]]) {
                seen[(unsigned char)str[i]] = true;
                fprintf(output, "%c", str[i]);
            }
        }
        fprintf(output, "\n");
    }

    fclose(input);
    fclose(output);
    return 0;
}
