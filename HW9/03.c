#include <stdio.h>
#include <string.h>

void count_and_sort_digits(const char *number) {
    int counts[10] = {0};
    for (int i = 0; number[i] != '\0'; i++) {
        counts[number[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (counts[i] > 0) {
            printf("%d %d\n", i, counts[i]);
        }
    }
}

int main() {
    char number[1001];
    scanf("%1000s", number);
    count_and_sort_digits(number);
    return 0;
}
