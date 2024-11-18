#include <stdio.h>

void print_odd() {
    int n;
    scanf("%d", &n);
    if (n == 0)
        return;
    if (n % 2 != 0)
        printf("%d ", n);
    print_odd();
}

int main() {
    print_odd();
    return 0;
}
