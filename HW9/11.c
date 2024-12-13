#include <stdio.h>

void find_min_sum_indices(int arr[], int size) {
    int min_sum = arr[0] + arr[1];
    int index1 = 0, index2 = 1;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int current_sum = arr[i] + arr[j];
            if (current_sum < min_sum) {
                min_sum = current_sum;
                index1 = i;
                index2 = j;
            }
        }
    }

    printf("%d %d\n", index1, index2);
}

int main() {
    int arr[30];
    for (int i = 0; i < 30; i++) {
        scanf("%d", &arr[i]);
    }
    find_min_sum_indices(arr, 30);
    return 0;
}
