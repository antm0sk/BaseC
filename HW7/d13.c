#include <stdio.h>

void print_factors(int n, int divisor) {
    if (n == 1) 
        return;
    if (n % divisor == 0) {
        printf("%d ", divisor);
        print_factors(n / divisor, divisor);
    } else {
        print_factors(n, divisor + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_factors(n, 2);
    return 0;
}
