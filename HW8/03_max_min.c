#include <stdio.h>

int main() {
    int arr[10];
    int max, min, max_index, min_index;

    // Считываем массив из 10 элементов
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Инициализируем максимум и минимум первым элементом
    max = min = arr[0];
    max_index = min_index = 1; // Индексы начинаются с 1

    // Находим максимум, минимум и их индексы
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i + 1; // Индекс в человеческом формате
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i + 1; // Индекс в человеческом формате
        }
    }

    // Выводим результаты
    printf("%d %d %d %d\n", max_index, max, min_index, min);

    return 0;
}
