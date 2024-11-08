#include <stdio.h>

int main() {
    int a, b, c;
    
    // Ввод сторон треугольника
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%s\n", (a + b > c && a + c > b && b + c > a) ? "YES" : "NO");
    
    return 0;
}
