#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, searchedNumber;
    printf("n = ");
    scanf("%d", &n);
    int numbers[n];
    
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("search for number = ");
    scanf("%d", &searchedNumber);
    
    int isFound = 0;
    
    int j;
    for (j = 0; j < n; j++) {
        if (searchedNumber == numbers[j]) {
            isFound = 1;
        }
    }
    
    if (isFound) {
        printf("yes");
    }
    else{
        printf("no");
    }

    return (EXIT_SUCCESS);
}

