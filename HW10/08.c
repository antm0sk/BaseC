#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001];
    int numbers[1000];
    int count = 0, num = 0, in_number = 0;

    if (fgets(str, sizeof(str), input) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                in_number = 1;
            } else if (in_number) {
                numbers[count++] = num;
                num = 0;
                in_number = 0;
            }
        }
        if (in_number) {
            numbers[count++] = num;
        }

        qsort(numbers, count, sizeof(int), compare);

        for (int i = 0; i < count; i++) {
            fprintf(output, "%d ", numbers[i]);
        }
        fprintf(output, "\n");
    }

    fclose(input);
    fclose(output);
    return 0;
}
