#include <stdio.h>

int is_balanced(const char *str) {
    int balance = 0;
    for (int i = 0; str[i] != '.'; i++) {
        if (str[i] == '(') {
            balance++;
        } else if (str[i] == ')') {
            balance--;
        }
        if (balance < 0) {
            return 0; // Закрывающая скобка перед открывающей
        }
    }
    return balance == 0;
}

int main() {
    char str[1001];
    scanf("%1000s", str);

    if (is_balanced(str)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
