#include <stdio.h>

float cosinus(float x) {
    float term = 1;  
    float sum = 1;   
    int n = 1;

    while (term > 0.001 || term < -0.001) {
        term = -term * x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    int degrees;
    scanf("%d", &degrees);

    float radians = degrees * 3.14159265 / 180.0;
    printf("%.3f\n", cosinus(radians));

    return 0;
}
