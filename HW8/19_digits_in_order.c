#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int digits[10], count = 0;

    while (N > 0) {
        digits[count++] = N % 10;
        N /= 10;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }

    printf("\n");
    return 0;
}