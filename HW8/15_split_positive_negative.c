#include <stdio.h>

int main() {
    int arr[10], pos[10], neg[10], pos_idx = 0, neg_idx = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos[pos_idx++] = arr[i];
        } else if (arr[i] < 0) {
            neg[neg_idx++] = arr[i];
        }
    }
    for (int i = 0; i < pos_idx; i++) {
        printf("%d ", pos[i]);
    }
    for (int i = 0; i < neg_idx; i++) {
        printf("%d ", neg[i]);
    }
    printf("\n");
    return 0;
}
