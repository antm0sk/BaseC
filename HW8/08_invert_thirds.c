#include <stdio.h>

int main() {
    int arr[12], temp;

    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    for (int start = 0; start < 12; start += 4) {
        for (int i = 0; i < 2; i++) {
            temp = arr[start + i];
            arr[start + i] = arr[start + 3 - i];
            arr[start + 3 - i] = temp;
        }
    }

    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
