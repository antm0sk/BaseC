#include <stdio.h>

unsigned long long grains_on_square(int n) {
    return 1ULL << (n - 1); 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%llu\n", grains_on_square(n));
    return 0;
}
