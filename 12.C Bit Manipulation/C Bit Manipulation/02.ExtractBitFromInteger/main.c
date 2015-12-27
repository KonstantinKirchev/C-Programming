#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, p;
    printf("number = ");
    scanf("%d", &n);
    printf("position = ");
    scanf("%d", &p);
    
    int bit = (n >> p) & 1;
    
    printf("The bit at position %d is %d", p, bit);
    
    return (EXIT_SUCCESS);
}

