#include <stdio.h>

int main() {
    int arr[10];
    int count[10] = {0}, max_count = 0, most_frequent;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
        if (count[i] > max_count) {
            max_count = count[i];
            most_frequent = arr[i];
        }
    }

    printf("%d\n", most_frequent);
    return 0;
}
