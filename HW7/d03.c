#include <stdio.h>

void print_reverse(int n) {
    if (n == 0)
        return;
    printf("%d ", n % 10);
    print_reverse(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) // Обработка случая, если введено число 0
        printf("0\n");
    else
        print_reverse(n);
    return 0;
}
