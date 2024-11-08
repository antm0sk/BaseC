#include <stdio.h>

int main() {
    int num;
    int prev_digit = -1;
    int has_adjacent = 0;


    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int current_digit = num % 10;
        if (current_digit == prev_digit) {
            has_adjacent = 1;
            break;
        }
        prev_digit = current_digit;
        num /= 10;
    }

    if (has_adjacent) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
