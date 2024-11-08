#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int product_of_digits(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int main() {
    int limit;
    scanf("%d", &limit);

    for (int i = 10; i <= limit; i++) {
        if (sum_of_digits(i) == product_of_digits(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
