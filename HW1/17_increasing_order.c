#include <stdio.h>

int main() {
    int a, b, c;
    
    // Ввод трех целых чисел
    scanf("%d %d %d", &a, &b, &c);
    
    // Проверка на порядок возрастания
    if (a < b && b < c) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
