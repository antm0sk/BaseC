#include <stdio.h>

int find_missing_number(int sequence[]) {
    int min = 1001, max = 0, total_sum = 0, actual_sum = 0;

    for (int i = 0; sequence[i] != 0; i++) {
        if (sequence[i] < min) min = sequence[i];
        if (sequence[i] > max) max = sequence[i];
        actual_sum += sequence[i];
    }

    for (int i = min; i <= max; i++) {
        total_sum += i;
    }

    return total_sum - actual_sum;
}

int main() {
    int sequence[1001];
    int index = 0;

    while (1) {
        int num;
        scanf("%d", &num);
        if (num == 0) break;
        sequence[index++] = num;
    }
    sequence[index] = 0;

    printf("%d\n", find_missing_number(sequence));
    return 0;
}
