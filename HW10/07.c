#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[10001];
    int lowercase = 0, uppercase = 0;

    if (fgets(str, sizeof(str), input) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (islower(str[i])) {
                lowercase++;
            } else if (isupper(str[i])) {
                uppercase++;
            }
        }
        fprintf(output, "%d %d\n", lowercase, uppercase);
    }

    fclose(input);
    fclose(output);
    return 0;
}
