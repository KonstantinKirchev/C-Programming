#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, gcd;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    if (a < 0) {
        a = a * (-1);
    }
    
    if (b < 0) {
        b = b * (-1);
    }
    
    char greatA[10];
    char greatB[10];
    int i;
    int indexA = 0;
    
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            greatA[indexA] = i;
            indexA++;
        }
    }
    greatA[indexA] = '\0';
    
    int j;
    int indexB = 0;
    for (j = 1; j <= b; j++) {
        if (b % j == 0) {
            greatB[indexB] = j;
            indexB++;
        }
    }
    greatB[indexB] = '\0';
    
    if (indexA <= indexB) {
        int l;
        for (l = 0; l < indexA; l++) {
            int h;
            for (h = 0; h < indexB; h++) {
                if (greatA[l] == greatB[h]) {
                    gcd = greatA[l];
                }
            }
        }
    }
    else{
        int l;
        for (l = 0; l < indexB; l++) {
            int h;
            for (h = 0; h < indexA; h++) {
                if (greatB[l] == greatA[h]) {
                    gcd = greatB[l];
                }
            }
        }
    }
    
    printf("GCD(a, b) = %d", gcd);
    
    return (EXIT_SUCCESS);
}

