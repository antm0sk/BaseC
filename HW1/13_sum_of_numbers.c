#include <stdio.h>

int main() {
    int number;
    
    // Ввод трехзначного положительного числа
    scanf("%d", &number);
    
    // Убедимся, что число трехзначное
    if (number < 100 || number > 999) {
        return 1; // Завершим программу с кодом ошибки, если число не трехзначное
    }
    
    // Вычисляем сумму цифр
    int sum = (number / 100) + ((number / 10) % 10) + (number % 10);
    
    // Вывод суммы цифр
    printf("%d\n", sum);
    
    return 0;
}
