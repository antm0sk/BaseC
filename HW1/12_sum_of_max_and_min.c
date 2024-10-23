#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int max, min;
    
    // Ввод пяти целых чисел
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    // Инициализируем max и min первым числом
    max = min = a;
    
    // Находим максимум
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    if (e > max) {
        max = e;
    }
    
    // Находим минимум
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    if (e < min) {
        min = e;
    }
    
    // Вывод суммы максимума и минимума
    printf("%d\n", max + min);
    
    return 0;
}
