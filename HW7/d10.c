#include <stdio.h>

int is_prime(int n, int delitel) {
    if (delitel == 1)
        return 1; // Число простое
    if (n % delitel == 0)
        return 0; // Число составное
    return is_prime(n, delitel - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 2)
        printf("NO\n");
    else if (is_prime(n, n - 1))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
