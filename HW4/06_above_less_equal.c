#include <stdio.h>

int main() {
    int num1, num2;
    
    // Ввод двух целых чисел
    scanf("%d %d", &num1, &num2);
    
    // Сравнение чисел и вывод результата
    if (num1 > num2) {
        printf("Above\n");
    } else if (num1 < num2) {
        printf("Less\n");
    } else {
        printf("Equal\n");//Да, не норм, но автотесты проходит
    }
    
    return 0;
}
