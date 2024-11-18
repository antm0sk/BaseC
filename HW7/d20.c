#include <stdio.h>

int recurs_power(int n, int p) {
    if (p == 0)
        return 1; // Любое число в степени 0 равно 1
    return n * recurs_power(n, p - 1);
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d\n", recurs_power(n, p));
    return 0;
}
