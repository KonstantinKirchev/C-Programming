#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n;
    printf("number = ");
    scanf("%u", &n);
    
    unsigned int tmp3 = (n >> 3) & 7;
    unsigned int num = ~(7 << 3) & n;  
    
    unsigned int tmp24 = (n >> 24) & 7;
    num = ~(7 << 24) & num;
    
    num = (tmp24 << 3) | num;
    num = (tmp3 << 24) | num;
 
    printf("The new number is: %u", num);
    
    return (EXIT_SUCCESS);
}

