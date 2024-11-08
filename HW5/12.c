#include <stdio.h>

int main() {
    int num;
    int min_digit = 9, max_digit = 0;

    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit < min_digit) {
            min_digit = digit;
        }
        if (digit > max_digit) {
            max_digit = digit;
        }
        num /= 10;
    }

    printf("%d %d\n", min_digit, max_digit);

    return 0;
}
