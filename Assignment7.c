#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3], total, perc;
};

int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];

    for(i=0; i<n; i++) {
        s[i].total = 0;
        printf("Enter Roll, Name: ");
        scanf("%d %s", &s[i].roll, s[i].name);
        printf("Enter marks in 3 subjects: ");
        for(j=0; j<3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].perc = s[i].total / 3.0;
    }

    printf("\n--- Results ---\n");
    for(i=0; i<n; i++)
        printf("Roll: %d | Name: %s | Percentage: %.2f%%\n", s[i].roll, s[i].name, s[i].perc);
    
    return 0;
}
