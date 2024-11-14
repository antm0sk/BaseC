#include <stdio.h>

int convert_to_base(int n, int p) {
    int result = 0;
    int place = 1;

    while (n > 0) {
        int remainder = n % p;
        result += remainder * place;
        n /= p;
        place *= 10;
    }

    return result;
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d\n", convert_to_base(n, p));
    return 0;
}
