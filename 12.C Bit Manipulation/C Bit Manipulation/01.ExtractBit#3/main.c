#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n;
    printf("n = ");
    scanf("%d", &n);
    
    int bit = (n >> 3) & 1;
    
    printf("The bit at position #3 is %d", bit);
    
    return (EXIT_SUCCESS);
}

