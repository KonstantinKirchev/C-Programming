#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int numbers[n];
    int tempNum[n];
    int longestNum[n];
    int length = 0;
    int maxLength = 0;
    
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int j;
    int k = 0;
    for (j = 0; j < n; j++) {
        printf("%d ", numbers[j]);
        if (numbers[j] < numbers[j + 1]) {
            tempNum[k++] = numbers[j];
        }
        if (numbers[j] >= numbers[j + 1] || j == n - 1){
            printf("\n");
            if (j != n - 1) {
                tempNum[k] = numbers[j];
                length = k + 1;
            }   
            else{
                length = k;
            }
            
            
            if (length > maxLength) {
                maxLength = length;
                int i;
                for (i = 0; i < length; i++) {
                    longestNum[i] = tempNum[i];
                }
            } 
            k = 0;
        }
    }
    printf("Longest: ");
    int g;
    for (g = 0; g < maxLength; g++) {
        printf("%d ", longestNum[g]);
    }


    
    
    

    return (EXIT_SUCCESS);
}

