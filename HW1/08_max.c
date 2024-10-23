#include <stdio.h>

int main() {
    int a, b;
    
    // Ввод двух целых чисел
    scanf("%d %d", &a, &b);
    
    // Проверяем и выводим числа в порядке возрастания
    if (a < b) {
        printf("%d %d\n", a, b);
    } else {
        printf("%d %d\n", b, a);
    }
    
    return 0;
}
