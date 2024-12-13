#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char path[1001];

    if (fgets(path, sizeof(path), input) != NULL) {
        size_t len = strlen(path);
        while (len > 0 && (path[len - 1] == '\n' || path[len - 1] == '\r')) {
            path[--len] = '\0';
        }

        char *slash = strrchr(path, '/');
        char *dot = strrchr(slash ? slash : path, '.');
        if (dot) {
            *dot = '\0';
        }
        fprintf(output, "%s.html\n", path);
    }

    fclose(input);
    fclose(output);
    return 0;
}
