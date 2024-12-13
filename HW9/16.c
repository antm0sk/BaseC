#include <stdio.h>

void determine_cell_color(char coordinate[]) {
    char column = coordinate[0];
    char row = coordinate[1];

    int column_index = column - 'A';
    int row_index = row - '1';

    if ((column_index + row_index) % 2 == 0) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }
}

int main() {
    char coordinate[3];
    scanf("%2s", coordinate);
    determine_cell_color(coordinate);
    return 0;
}
