#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int choice, n, i;
    double x, y, fact;

    printf("1. Power (x^y)\n2. Factorial (n!)\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter base x and exponent y: ");
        scanf("%lf %lf", &x, &y);
        printf("Result: %.2f", pow(x, y));
    } else if(choice == 2) {
        printf("Enter n: ");
        scanf("%d", &n);
        fact = 1;
        for(i=1; i<=n; i++) fact *= i;
        printf("Result: %.0f", fact);
    }
    return 0;
}

