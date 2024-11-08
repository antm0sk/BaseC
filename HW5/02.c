#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b || a < -100 || b > 100) {
        return 1;
    }

    for (int i = a; i <= b; i++) {
        printf("%d ", i * i);
    }

    printf("\n");

    return 0;
}
