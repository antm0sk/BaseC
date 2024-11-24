#include <stdio.h>

int main() {
    int arr[12];
    double sum = 0;
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%.2f\n", sum / 12);
    return 0;
}