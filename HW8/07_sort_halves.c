#include <stdio.h>

int main() {
    int arr[10], temp;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[5 + i];
        arr[5 + i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}