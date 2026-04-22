#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50], desig[50], gender;
    float salary;
};

int main() {
    int n, males = 0, females = 0;
    struct EMPLOYEE e[20];
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Name, Desig, Gender(M/F), Salary: ");
        scanf("%s %s %c %f", e[i].name, e[i].desig, &e[i].gender, &e[i].salary);
        if (e[i].gender == 'M' || e[i].gender == 'm') males++;
        else females++;
    }

    printf("\nTotal: %d | Males: %d | Females: %d\n", n, males, females);
    printf("Salary > 10,000:\n");
    for (int i = 0; i < n; i++) if (e[i].salary > 10000) printf("- %s\n", e[i].name);
    
    printf("Asst Managers:\n");
    for (int i = 0; i < n; i++) if (strcmp(e[i].desig, "AsstManager") == 0) printf("- %s\n", e[i].name);

    return 0;
}

