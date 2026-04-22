#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum, term;
    printf("Enter value of x (radians) and number of terms: ");
    scanf("%f %d", &x, &n);

    term = x;
    sum = x;

    for (int i = 1; i < n; i++) {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }

    printf("Sum of sine series: %.4f\n", sum);
    return 0;
}

