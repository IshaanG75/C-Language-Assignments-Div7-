#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2, sm_div = -1;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int min = (n1 < n2) ? n1 : n2;
    for (int i = 2; i <= min; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            sm_div = i;
            break;
        }
    }

    if (sm_div != -1) printf("Smallest Common Divisor: %d\n", sm_div);
    else printf("No common divisor other than 1.\n");

    printf("GCD: %d\n", findGCD(n1, n2));
    return 0;
}

