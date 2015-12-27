#include <stdio.h>
#include <stdlib.h>

int main() {
    float number1;
    float number2;
    float number3;
    float number4;
    float number5;
    
    scanf("%f %f %f %f %f", &number1, &number2, &number3, &number4, &number5);
    
    float sum = number1 + number2 + number3 + number4 + number5;
    
    printf("Sum = %.2f", sum);
    
    return (EXIT_SUCCESS);
}

