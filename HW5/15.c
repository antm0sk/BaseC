#include <stdio.h>

int main() {
    int num, even_count = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num % 2 == 0) {
            even_count++;
        }
    }

    printf("%d\n", even_count);

    return 0;
}
