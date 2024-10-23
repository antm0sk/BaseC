#include <stdio.h>

int main() {
    int month;
    
    // Ввод номера месяца
    scanf("%d", &month);
    
    // Определение времени года по номеру месяца
    switch (month) {
        case 1: // Январь
        case 2: // Февраль
        case 12: // Декабрь
            printf("winter\n");
            break;
        case 3: // Март
        case 4: // Апрель
        case 5: // Май
            printf("spring\n");
            break;
        case 6: // Июнь
        case 7: // Июль
        case 8: // Август
            printf("summer\n");
            break;
        case 9: // Сентябрь
        case 10: // Октябрь
        case 11: // Ноябрь
            printf("autumn\n");
            break;
        default:
            printf("Invalid month\n"); // Обработка некорректного ввода
            break;
    }
    
    return 0;
}
