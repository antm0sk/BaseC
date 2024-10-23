#include <stdio.h>

int main() {
    int a, b, c, d, e, min;
    
    // Ввод пяти целых чисел
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    // Находим наименьшее число
    min = a; // предполагаем, что a — наименьшее
    if (b < min) {
        min = b; // если b меньше, то min становится b
    }
    if (c < min) {
        min = c; // если c меньше, то min становится c
    }
    if (d < min) {
        min = d; // если d меньше, то min становится d
    }
    if (e < min) {
        min = e; // если e меньше, то min становится e
    }
    
    // Вывод наименьшего числа
    printf("%d\n", min);
    
    return 0;
}
