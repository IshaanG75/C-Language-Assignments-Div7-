#include <stdio.h>

long factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}

long factorialIterative(int n) {
    long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) printf("Invalid Input.");
    else {
        printf("Recursive: %ld\n", factorialRecursive(num));
        printf("Iterative: %ld\n", factorialIterative(num));
    }
    return 0;
}

