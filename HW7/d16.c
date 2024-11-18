#include <stdio.h>

int is2pow(int n) {
    if (n == 1)
        return 1; // Точная степень двойки
    if (n % 2 != 0)
        return 0; // Не делится на 2, не степень двойки
    return is2pow(n / 2);
}

int main() {
    int n;
    scanf("%d", &n);
    if (is2pow(n))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
