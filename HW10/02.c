#include <stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    int N;
    fscanf(input, "%d", &N);

    char result[27];
    int letter = 'A', digit = 2, index = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            result[index++] = letter++;
        } else {
            result[index++] = digit + '0';
            digit = (digit == 8) ? 2 : digit + 2;
        }
    }
    result[index] = '\0';

    fprintf(output, "%s\n", result);
    fclose(input);
    fclose(output);
    return 0;
}