#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    printf("Enter main string: ");
    scanf("%s", str1);

    printf("Length: %lu\n", strlen(str1));

    strcpy(temp, str1);
    printf("Reversed: %s\n", strrev(temp)); // Note: strrev is common but non-standard in some Linux compilers

    printf("Enter string for comparison: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0) printf("Strings are equal.\n");
    else printf("Strings are not equal.\n");

    if (strstr(str1, str2)) printf("'%s' is a substring of '%s'\n", str2, str1);
    
    return 0;
}

