#include <stdio.h>

int main() {
    int number;
    
    // Ввод трехзначного положительного числа
    scanf("%d", &number);
    
    // Убедимся, что число трехзначное
    if (number < 100 || number > 999) {
        return 1; // Завершим программу с кодом ошибки, если число не трехзначное
    }
    
    // Вычисляем произведение цифр
    int product = (number / 100) * ((number / 10) % 10) * (number % 10);
    
    // Вывод произведения цифр
    printf("%d\n", product);
    
    return 0;
}
