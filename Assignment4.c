#include <stdio.h>

int main() {
    float basic, hra, ta, gross, pt, net;
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;
    ta = 0.05 * basic;
    gross = basic + hra + ta;
    pt = 0.02 * gross;
    net = gross - pt;

    printf("Gross Salary: %.2f\nNet Salary: %.2f\n", gross, net);
    return 0;
}

