#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int l = abs(*(int *)a) % 10;
    int r = abs(*(int *)b) % 10;
    return (l - r);
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, 10, sizeof(int), compare);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}