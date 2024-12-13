#include <stdio.h>

int trace_matrix(int size, int matrix[size][size]) {
    int trace = 0;
    for (int i = 0; i < size; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

int main() {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d\n", trace_matrix(5, matrix));
    return 0;
}
