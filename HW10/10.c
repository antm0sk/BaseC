#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001], longest_word[1001] = "";
    int max_length = 0;

    if (fgets(str, sizeof(str), input) != NULL) {
        char *token = strtok(str, " ");
        while (token != NULL) {
            int length = strlen(token);
            if (token[length - 1] == '\n' || token[length - 1] == '\r') {
                token[--length] = '\0';
            }
            if (length > max_length) {
                max_length = length;
                strcpy(longest_word, token);
            }
            token = strtok(NULL, " ");
        }
        fprintf(output, "%s\n", longest_word);
    }

    fclose(input);
    fclose(output);
    return 0;
}
