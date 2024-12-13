#include <stdio.h>
#include <string.h>

void replace_ling_with_cao(const char *input, char *output) {
    const char *search = "Ling";
    const char *replace = "Cao";
    const char *ptr = input;
    char *out_ptr = output;

    while ((ptr = strstr(ptr, search)) != NULL) {
        size_t prefix_len = ptr - input;
        strncpy(out_ptr, input, prefix_len);
        out_ptr += prefix_len;
        strcpy(out_ptr, replace);
        out_ptr += strlen(replace);
        ptr += strlen(search);
        input = ptr;
    }
    strcpy(out_ptr, input);
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001], result[2001];

    if (fgets(str, sizeof(str), input) != NULL) {
        replace_ling_with_cao(str, result);
        fprintf(output, "%s", result);
    }

    fclose(input);
    fclose(output);
    return 0;
}
