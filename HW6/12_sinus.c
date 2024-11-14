#include <stdio.h>

float sinus(float x) {
    float term = x;  
    float sum = x;   
    int n = 1;

    while (term > 0.001 || term < -0.001) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    float degrees;
    scanf("%f", &degrees);

    float radians = degrees * 3.14159265 / 180.0;
    printf("%.3f\n", sinus(radians));

    return 0;
}
