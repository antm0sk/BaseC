#include <stdio.h>

int akkerman(int m, int n) {
    if (m == 0)
        return n + 1;
    if (m > 0 && n == 0)
        return akkerman(m - 1, 1);
    if (m > 0 && n > 0)
        return akkerman(m - 1, akkerman(m, n - 1));
    return 0; // Не должно достигаться
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", akkerman(m, n));
    return 0;
}
