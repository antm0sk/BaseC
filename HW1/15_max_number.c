#include <stdio.h>

int main() {
    int number;
    
    // Ввод трехзначного положительного числа
    scanf("%d", &number);
    
    // Убедимся, что число трехзначное
    if (number < 100 || number > 999) {
        return 1; // Завершим программу с кодом ошибки, если число не трехзначное
    }
    
    // Извлечение цифр
    int first_digit = number / 100;            // Первая цифра
    int second_digit = (number / 10) % 10;     // Вторая цифра
    int third_digit = number % 10;              // Третья цифра

    // Нахождение максимальной цифры
    int max_digit = first_digit; // Начинаем с первой цифры

    if (second_digit > max_digit) {
        max_digit = second_digit;
    }
    if (third_digit > max_digit) {
        max_digit = third_digit;
    }
    
    // Вывод максимальной цифры
    printf("%d\n", max_digit);
    
    return 0;
}
