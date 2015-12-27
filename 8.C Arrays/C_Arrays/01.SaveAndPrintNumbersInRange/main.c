#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int numbers[n];
    
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int j;
    for (j = 0; j < n; j++) {
        printf("%d ", numbers[j]);

    }
    
    return (EXIT_SUCCESS);
}

