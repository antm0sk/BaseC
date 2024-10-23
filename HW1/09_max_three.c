#include <stdio.h>

int main() {
    int a, b, c, max;
    
    // Ввод трех целых чисел
    scanf("%d %d %d", &a, &b, &c);
    
    // Находим наибольшее число
    max = a; // предполагаем, что a — наибольшее
    if (b > max) {
        max = b; // если b больше, то max становится b
    }
    if (c > max) {
        max = c; // если c больше, то max становится c
    }
    
    // Вывод наибольшего числа
    printf("%d\n", max);
    
    return 0;
}
