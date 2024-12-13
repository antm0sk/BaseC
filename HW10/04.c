#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int char_count(const char *str, char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int cmp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char word1[101], word2[101], result[101];
    int res_index = 0;

    fscanf(input, "%s %s", word1, word2);

    for (char c = 'a'; c <= 'z'; c++) {
        if (char_count(word1, c) == 1 && char_count(word2, c) == 1) {
            result[res_index++] = c;
        }
    }

    result[res_index] = '\0';

    qsort(result, res_index, sizeof(char), cmp);

    for (int i = 0; i < res_index; i++) {
        fprintf(output, "%c ", result[i]);
    }
    fprintf(output, "\n");

    fclose(input);
    fclose(output);
    return 0;
}
