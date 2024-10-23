#include <stdio.h>

int main() {
    int a, b, c, d, e, max;
    
    // Ввод пяти целых чисел
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    // Находим наибольшее число
    max = a; // предполагаем, что a — наибольшее
    if (b > max) {
        max = b; // если b больше, то max становится b
    }
    if (c > max) {
        max = c; // если c больше, то max становится c
    }
    if (d > max) {
        max = d; // если d больше, то max становится d
    }
    if (e > max) {
        max = e; // если e больше, то max становится e
    }
    
    // Вывод наибольшего числа
    printf("%d\n", max);
    
    return 0;
}
