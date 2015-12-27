#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    unsigned int n;
    int p, q, k;
    printf("number = ");
    scanf("%u", &n);
    printf("p = ");
    scanf("%d", &p);
    printf("q = ");
    scanf("%d", &q);
    printf("k = ");
    scanf("%d", &k);
    
    int mask = pow(2, k) - 1;
    
    if (p + k >= 32 || p < 0 || q < 0) {
        printf("out of range");
        return 0;
    }
    
    if (p > q) {
        p = p ^ q;
        q = p ^ q;
        p = p ^ q;
    }

    
    if (p + k >= q) {
        printf("overlapping");
        return 0;
    }

    
    
    unsigned int tmpP = (n >> p) & mask;
    unsigned int num = ~(mask << p) & n;  
    
    unsigned int tmpQ = (n >> q) & mask;
    num = ~(mask << q) & num;
    
    num = (tmpQ << p) | num;
    num = (tmpP << q) | num;
 
    printf("The new number is: %u", num);
    
    return (EXIT_SUCCESS);
}

