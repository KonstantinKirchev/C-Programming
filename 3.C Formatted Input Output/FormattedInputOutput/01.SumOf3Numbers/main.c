#include <stdio.h>
#include <stdlib.h>

int main() {
    float a;
    float b;
    float c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    float sum = a + b + c;
    if (a - (int)a == 0 && b - (int)b == 0 && c - (int)c == 0) {
        printf("Sum = %d", (int)sum);
    }
    else{
        printf("Sum = %.1f", sum);    
    }
    
    return (EXIT_SUCCESS);
}

