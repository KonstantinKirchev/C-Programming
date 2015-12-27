#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter %d integers\n", n);
    
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int j;
    for (j = 0; j < n - 1; j++) {
        int l;
        for (l = 0; l < (n - j) - 1; l++) {
            if (numbers[l] > numbers[l + 1]) {   
                numbers[l] = numbers[l] ^ numbers[l + 1];
                numbers[l + 1] = numbers[l] ^ numbers[l + 1];
                numbers[l] = numbers[l] ^ numbers[l + 1];
            }
        }     
    }
    
    printf("Sorted list in ascending order:\n");
    
    int k;
    for (k = 0; k < n; k++) {
        printf("%d ", numbers[k]);
    }

    return (EXIT_SUCCESS);
}

