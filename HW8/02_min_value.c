#include <stdio.h>

int main() {
    int arr[5], min = 1000000;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d\n", min);
    return 0;
}
