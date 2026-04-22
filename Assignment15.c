#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    srand(time(0)); // Seed with current time

    printf("Pseudo Random Numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", rand() % 100); // Numbers between 0-99
    }
    return 0;
}

