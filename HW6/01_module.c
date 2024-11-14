#include <stdio.h>

int absolute(int number) {
    return (number < 0) ? -number : number;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", absolute(number));
    return 0;
}
