#include <stdio.h>
#include <stdlib.h>

int main() {
    float weight;
    float weightOnMoon;
    
    printf("Please enter your weight = ");
    scanf("%f", &weight);
    printf("Your weight on the Moon is = %.3f", weight * 0.17);
    
    return (EXIT_SUCCESS);
}

