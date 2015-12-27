#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,b,c,big;
    
    printf("Enter 3 numbers:");
    scanf("%f %f %f",&a,&b,&c);
    
    big=(a > b && a > c ? a : b > c ? b : c);
    
    printf("The biggest number is: %.1f",big);
    
    return (EXIT_SUCCESS);
}

