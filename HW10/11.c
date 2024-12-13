#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001];
    int count = 0;

    if (fgets(str, sizeof(str), input) != NULL) {
        char *token = strtok(str, " ");
        while (token != NULL) {
            int length = strlen(token);
            if (token[length - 1] == '\n' || token[length - 1] == '\r') {
                token[--length] = '\0';
            }
            if (length > 0 && token[length - 1] == 'a') {
                count++;
            }
            token = strtok(NULL, " ");
        }
        fprintf(output, "%d\n", count);
    }

    fclose(input);
    fclose(output);
    return 0;
}
