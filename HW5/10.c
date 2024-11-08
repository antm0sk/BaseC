#include <stdio.h>

int main() {
    int num;
    int prev_digit = 10;
    int is_increasing = 1;

    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int current_digit = num % 10;
        if (current_digit >= prev_digit) {
            is_increasing = 0;
            break;
        }
        prev_digit = current_digit;
        num /= 10;
    }

    if (is_increasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
