#include <stdio.h>

int main() {
    int num, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reversed digits: ");
    if (num == 0) printf("0");
    while (num != 0) {
        remainder = num % 10;
        printf("%d", remainder);
        num /= 10;
    }
    printf("\n");
    return 0;
}

