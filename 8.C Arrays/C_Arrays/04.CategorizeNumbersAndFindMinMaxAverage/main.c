#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    float input[n];
    int intNumbers[n];
    float floatNumbers[n];
    
    int i;
    for (i = 0; i < n; i++) {
        scanf("%f", &input[i]);
    }
    
    int j;
    int k = 0;
    int l = 0;
    for (j = 0; j < n; j++) {
        if (input[j] - (int)input[j] == 0) {
            intNumbers[l++] = (int)input[j];
        }
        else{
            floatNumbers[k++] = input[j];
        }
    }
    
    float minFloat = FLT_MAX;
    float maxFloat = FLT_MIN;
    float floatSum = 0;
    
    printf("[");
    int h;
    for (h = 0; h < k; h++) {
        if (floatNumbers[h] > maxFloat) {
            maxFloat = floatNumbers[h];
        }
        if (floatNumbers[h] < minFloat) {
            minFloat = floatNumbers[h];
        }
        floatSum += floatNumbers[h]; 
        if (h != (k - 1)) {
            printf("%.3f, ", floatNumbers[h]);
        }
        else{
            printf("%.3f", floatNumbers[h]);
        }

        
    }
    printf("]");
    float floatAvg = floatSum / h;
    printf(" -> min: %.1f, max: %.3f, sum: %.3f, avg: %.2f\n", minFloat, maxFloat, floatSum, floatAvg);
    
    int minInt = INT_MAX;
    int maxInt = INT_MIN;
    int intSum = 0;
    
    printf("[");
    int f;
    for (f = 0; f < l; f++) {
        if (intNumbers[f] > maxInt) {
            maxInt = intNumbers[f];
        }
        if (intNumbers[f] < minInt) {
            minInt = intNumbers[f];
        }
        
        intSum += intNumbers[f]; 
        
        if (f != (l - 1)) {
            printf("%d, ", intNumbers[f]);
        }
        else{
            printf("%d", intNumbers[f]);
        }

        
    }
    printf("]");
    float intAvg = intSum / f;
    printf(" -> min: %d, max: %d, sum: %d, avg: %.2f", minInt, maxInt, intSum, intAvg);

    return (EXIT_SUCCESS);
}

