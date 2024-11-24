#include <stdio.h>

int main() {
    int N, counts[10] = {0};

    scanf("%d", &N);

    for (int i = 2; i <= 9; i++) {
        for (int j = 2; j <= N; j++) {
            if (j % i == 0) {
                counts[i]++;
            }
        }
        printf("%d %d\n", i, counts[i]);
    }

    return 0;
}
