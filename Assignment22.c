#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);

    do {
        printf("\n--- String Operations Menu ---");
        printf("\n1. Length of Strings");
        printf("\n2. Copy String 1 to Temp");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String 1");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of Str1: %lu\n", strlen(str1));
                printf("Length of Str2: %lu\n", strlen(str2));
                break;
            case 2:
                strcpy(temp, str1);
                printf("Temp string now contains: %s\n", temp);
                break;
            case 3:
                strcat(str1, str2);
                printf("After Concatenation (Str1): %s\n", str1);
                break;
            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 5:
                printf("Reversed Str1: ");
                for(int i = strlen(str1) - 1; i >= 0; i--) {
                    putchar(str1[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

