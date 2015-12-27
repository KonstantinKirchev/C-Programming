#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        int j;
        for (j = 1; j <= n; j++) {
            printf("%d ", j + i);
        }
        printf("\n");
        
    }
    return (EXIT_SUCCESS);
}

