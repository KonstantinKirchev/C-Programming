#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int number[n];
    int i;  
    for (i = 0; i < n; i++) {
        printf("number[%d] = ", i);
        scanf("%d", &number[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    float avg = 0;
    int j;
    for (j = 0; j < n; j++) {
        if (number[j] > max) {
            max = number[j];
        }
        if (number[j] < min) {
            min = number[j];
        }
        sum += number[j];
        avg = (float)sum / n;
    }

 
    printf("min = %.2f\nmax = %.2f\nsum = %.2f\navg = %.2f\n", (float)min, (float)max, (float)sum, avg);


    return (EXIT_SUCCESS);
}

