#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    
    printf("a= ");
    scanf("%f", &a);
    
    printf("b= ");
    scanf("%f", &b);
    
    printf("c= ");
    scanf("%f", &c);
    
    float sum = a + b + c;
    
    float average = sum / 3;
    
    printf("Average = %.5f", average);
    
    return (EXIT_SUCCESS);
}

