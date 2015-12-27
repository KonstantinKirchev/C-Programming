#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int numbers[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int length = sizeof(numbers) / sizeof(int);
    int j;
    for (j = length -1 ; j >= 0; j--) {
        printf("%d ", *(numbers + j));
    }

    return (EXIT_SUCCESS);
}

