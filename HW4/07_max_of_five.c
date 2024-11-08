#include <stdio.h>

int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    printf("%s\n", (num1 > num2) ? "Above" : (num1 < num2) ? "Less" : "Equal");
    
    return 0;
}
