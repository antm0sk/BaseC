#include <stdio.h>
#include <string.h>

void replace_a_with_b(const char *input, char *output) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == 'a') {
            output[i] = 'b';
        } else if (input[i] == 'b') {
            output[i] = 'a';
        } else if (input[i] == 'A') {
            output[i] = 'B';
        } else if (input[i] == 'B') {
            output[i] = 'A';
        } else {
            output[i] = input[i];
        }
    }
    output[strlen(input)] = '\0';
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001], result[1001];

    fgets(str, sizeof(str), input);

    replace_a_with_b(str, result);

    fprintf(output, "%s", result);

    fclose(input);
    fclose(output);
    return 0;
}
