#include <stdio.h>

int main() {
    int num;
    int digits[10] = {0};

    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        digits[digit]++;
        if (digits[digit] > 1) {
            printf("YES\n");
            return 0;
        }
        num /= 10;
    }

    printf("NO\n");
    return 0;
}
