#include <stdio.h>

void print_sequence(int n, int current, int count) {
    if (n == 0)
        return;
    printf("%d ", current);
    if (count == current) {
        print_sequence(n - 1, current + 1, 1);
    } else {
        print_sequence(n - 1, current, count + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_sequence(n, 1, 1);
    return 0;
}
