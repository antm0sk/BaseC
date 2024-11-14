#include <stdio.h>

void print_simple(int n) {
    int divisor = 2;
    while (n > 1) {
        while (n % divisor == 0) {
            printf("%d ", divisor);
            n /= divisor;
        }
        divisor++;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    print_simple(n);
    return 0;
}
