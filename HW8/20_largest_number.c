#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)b - *(char *)a);
}

int main() {
    char number[20];
    scanf("%s", number);

    qsort(number, strlen(number), sizeof(char), compare);

    printf("%s\n", number);
    return 0;
}