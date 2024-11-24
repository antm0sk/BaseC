#include <stdio.h>

int main() {
    int arr[10], max1 = -1000000, max2 = -1000000;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    printf("%d\n", max1 + max2);
    return 0;
}
