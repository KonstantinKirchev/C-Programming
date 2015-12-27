#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, p;
    printf("number = ");
    scanf("%d", &n);
    printf("position = ");
    scanf("%d", &p);
    
    int num = ~(1 << p) & n;
    
    printf("The new number is: %d", num);
    
    return (EXIT_SUCCESS);
}

