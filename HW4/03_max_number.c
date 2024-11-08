#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    // Убедимся, что число трехзначное
    if (number < 100 || number > 999) {
        return 1; 
    }
    
    // Извлечение цифр
    int first_digit = number / 100;            
    int second_digit = (number / 10) % 10;     
    int third_digit = number % 10;             

    int max_digit = (first_digit > second_digit) ? 
                    ((first_digit > third_digit) ? first_digit : third_digit) : 
                    ((second_digit > third_digit) ? second_digit : third_digit);
    

    printf("%d\n", max_digit);
    
    return 0;
}
