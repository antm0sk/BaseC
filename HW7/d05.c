#include <stdio.h>

void to_binary(int num) {
    if (num == 0)
        return;
    to_binary(num / 2);
    printf("%d", num % 2);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) // Обработка случая, если введено число 0
        printf("0");
    else
        to_binary(n);
    printf("\n");
    return 0;
}
