#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int bit = (n >> 1) & 1;
    
    printf("The bit at position 1 is %d", bit);
    
    return (EXIT_SUCCESS);
}

