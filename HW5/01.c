#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int square = i * i;
        int cube = i * i * i;
        printf("%d %d %d\n", i, square, cube);
    }

    return 0;
}
