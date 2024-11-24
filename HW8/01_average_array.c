#include <stdio.h>

int main() {
    int arr[5];
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%.2f\n", sum / 5);
    return 0;
}
