#include <stdio.h>

int main() {
    int n, arr[50], even[50], odd[50], e = 0, o = 0;
    printf("Enter size of list: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even[e++] = arr[i];
        else odd[o++] = arr[i];
    }

    printf("Even list: ");
    for (int i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\nOdd list: ");
    for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    return 0;
}

