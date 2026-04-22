#include <stdio.h>

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int a = x, b = y;
    swapValue(a, b);
    printf("After swap by value: x=%d, y=%d (No change)\n", a, b);

    swapReference(&a, &b);
    printf("After swap by reference: x=%d, y=%d (Changed!)\n", a, b);

    return 0;
}
