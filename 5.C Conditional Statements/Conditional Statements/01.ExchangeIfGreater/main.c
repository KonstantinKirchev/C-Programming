#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, temp;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("a = %.1f\nb = %.1f", a, b);

    return (EXIT_SUCCESS);
}

