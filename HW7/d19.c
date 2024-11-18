#include <stdio.h>

int acounter(void) {
    char c = getchar();
    if (c == '.') 
        return 0; // Конец строки
    return (c == 'a') + acounter();
}

int main() {
    printf("%d\n", acounter());
    return 0;
}
