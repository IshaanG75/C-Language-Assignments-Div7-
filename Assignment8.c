#include <stdio.h>

int main() {
    float m[5], total = 0, avg;
    int pass = 1;
    printf("Enter marks for 5 courses: ");
    for(int i=0; i<5; i++) {
        scanf("%f", &m[i]);
        if(m[i] < 40) pass = 0;
        total += m[i];
    }

    if(!pass) {
        printf("Result: FAIL\n");
    } else {
        avg = total / 5.0;
        printf("Percentage: %.2f%% - Grade: ", avg);
        if(avg >= 75) printf("Distinction\n");
        else if(avg >= 60) printf("First Division\n");
        else if(avg >= 50) printf("Second Division\n");
        else printf("Third Division\n");
    }
    return 0;
}

