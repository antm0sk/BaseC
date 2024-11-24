#include <stdio.h>

int main() {
    int arr[10], count[10] = {0};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] == 1) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
