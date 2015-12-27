#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, p;
    printf("number = ");
    scanf("%d", &n);
    printf("position = ");
    scanf("%d", &p);
    
    int bit = (n >> p) & 1;
    
    printf("Bit at position %d == 1: ", p);
    
    if (bit == 1) {
        printf("true");
    }
    else
    {
        printf("false");
    }

    
    
    
    return (EXIT_SUCCESS);
}

