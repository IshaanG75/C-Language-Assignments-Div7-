#include <stdio.h>
#include <math.h>

void printPrimeFactors(int n) {
    while (n % 2 == 0) { printf("2 "); n /= 2; }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) { printf("%d ", i); n /= i; }
    }
    if (n > 2) printf("%d", n);
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square root: %.2f\n", sqrt(n));
    printf("Square: %d\n", n * n);
    printf("Cube: %d\n", n * n * n);
    printf("Is Prime: %s\n", isPrime(n) ? "Yes" : "No");

    for(int i = 1; i <= n; i++) fact *= i;
    printf("Factorial: %lld\n", fact);
    printf("Prime Factors: "); printPrimeFactors(n);
    printf("\n");
    return 0;
}

