#include <stdio.h>

int main() {
    int arr[10], temp;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    temp = arr[9]; // Сохраняем последний элемент
    for (int i = 9; i > 0; i--) {
        arr[i] = arr[i - 1]; // Сдвигаем элементы вправо
    }
    arr[0] = temp; // Переносим сохраненный элемент в начало

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}