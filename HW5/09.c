#include <stdio.h>

int main() {
    int num;
    int all_even = 1;

    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            all_even = 0;
            break;
        }
        num /= 10;
    }

    if (all_even) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
