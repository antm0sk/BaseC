#include <stdio.h>

int product_of_digits(int num, int is_even) {
    int product = 1, found = 0;
    while (num > 0) {
        int digit = num % 10;
        if ((digit % 2 == 0) == is_even) {
            product *= digit;
            found = 1;
        }
        num /= 10;
    }
    return found ? product : 0;
}

void process_array(int arr[], int size) {
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    for (int i = 0; i < size; i++) {
        if (even_count > odd_count && arr[i] % 2 != 0) {
            arr[i] = product_of_digits(arr[i], 0);
        } else if (odd_count >= even_count && arr[i] % 2 == 0) {
            arr[i] = product_of_digits(arr[i], 1);
        }
    }
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    process_array(arr, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
