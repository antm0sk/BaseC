#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, 5, sizeof(int), compare_asc);
    qsort(arr + 5, 5, sizeof(int), compare_desc);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
