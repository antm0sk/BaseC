#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int freq[26] = {0};
    int i;
    
    // Подсчитываем частоту символов
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[str[i] - 'a']++;
        }
    }
    
    // Проверяем, сколько символов имеют нечетную частоту
    int odd_count = 0;
    for (i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
        }
    }
    
    // Для палиндрома допускается не более одного символа с нечетной частотой
    return odd_count <= 1;
}

int main() {
    FILE *infile = fopen("input.txt", "r");

    if (infile == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }

    char input_string[1001];
    fgets(input_string, sizeof(input_string), infile);
    input_string[strcspn(input_string, "\n")] = '\0';  // Убираем символ новой строки

    if (is_palindrome(input_string)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    fclose(infile);
    return 0;
}
