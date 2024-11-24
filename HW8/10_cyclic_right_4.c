#include <stdio.h>

int main() {
    int arr[12], temp[4];
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++) {
        temp[i] = arr[12 - 4 + i];
    }
    for (int i = 11; i >= 4; i--) {
        arr[i] = arr[i - 4];
    }
    for (int i = 0; i < 4; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
