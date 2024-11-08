#include <stdio.h>

int main() {
    int num;
    int even_count = 0, odd_count = 0;

    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        num /= 10;
    }

    printf("%d %d\n", even_count, odd_count);

    return 0;
}
