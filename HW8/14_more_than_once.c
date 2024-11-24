#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[10], count[1001] = {0}, result[10], idx = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (count[i] > 1) {
            result[idx++] = i;
        }
    }
    for (int i = 0; i < idx; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
