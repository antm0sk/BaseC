#include <stdio.h>

int main() {
    int a, b;
    
    // Ввод двух целых чисел
    scanf("%d %d", &a, &b);
    
    // Выводим числа в порядке возрастания с использованием тернарного оператора
    a < b ? printf("%d %d\n", a, b) : printf("%d %d\n", b, a);
    
    return 0;
}

