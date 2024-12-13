#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char surname[34], name[34], patronymic[34];

    if (fscanf(input, "%33s %33s %33s", surname, name, patronymic) == 3) {
        fprintf(output, "Hello, %s %s!\n", name, surname);
    }

    fclose(input);
    fclose(output);
    return 0;
}
