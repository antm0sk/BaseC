#include <stdio.h>

int main() {
    int num;
    int count = 0;

    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit == 9) {
            count++;
        }
        num /= 10;
    }

    if (count == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
