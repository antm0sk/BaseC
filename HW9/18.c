#include <stdio.h>

int find_row_max(int row[], int size) {
    int max = row[0];
    for (int i = 1; i < size; i++) {
        if (row[i] > max) {
            max = row[i];
        }
    }
    return max;
}

int main() {
    int matrix[10][10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        sum += find_row_max(matrix[i], 10);
    }

    printf("%d\n", sum);
    return 0;
}
