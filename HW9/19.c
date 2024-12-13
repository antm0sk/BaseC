#include <stdio.h>

double average_main_diagonal(int size, int matrix[size][size]) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum / size;
}

int count_greater_than_average(int size, int matrix[size][size], double average) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] > average && matrix[i][j] > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    double average = average_main_diagonal(5, matrix);
    int count = count_greater_than_average(5, matrix, average);

    printf("%d\n", count);
    return 0;
}
