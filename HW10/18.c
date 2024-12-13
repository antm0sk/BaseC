#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_extra_spaces(char *str) {
    int i = 0, j = 0;
    int n = strlen(str);
    
    // Удаляем пробелы в начале
    while (i < n && str[i] == ' ') {
        i++;
    }

    // Проходим по строке, удаляя сдвоенные пробелы
    for (; i < n; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
        }
    }

    // Завершаем строку
    str[j] = '\0';

    // Удаляем пробелы в конце
    while (j > 0 && str[j - 1] == ' ') {
        str[j - 1] = '\0';
        j--;
    }
}

int main() {
    FILE *infile = fopen("input.txt", "r");
    FILE *outfile = fopen("output.txt", "w");

    if (infile == NULL || outfile == NULL) {
        printf("Ошибка открытия файлов\n");
        return 1;
    }

    char input_string[1001];
    fgets(input_string, sizeof(input_string), infile);
    input_string[strcspn(input_string, "\n")] = '\0';

    remove_extra_spaces(input_string);

    fputs(input_string, outfile);

    fclose(infile);
    fclose(outfile);

    return 0;
}
