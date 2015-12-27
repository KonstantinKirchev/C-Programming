#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, p, v;
    printf("number = ");
    scanf("%d", &n);
    printf("position = ");
    scanf("%d", &p);
    printf("v = ");
    scanf("%d", &v);
    
    int num;
    if (v == 0) {
        num = ~(1 << p) & n;
    }
    else
    {
        num = (1 << p) | n;
    }
 
    printf("The new number is: %d", num);
    
    return (EXIT_SUCCESS);
}

