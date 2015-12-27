#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, h;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("h = ");
    scanf("%f", &h);
    float area = ((a + b) / 2) * h;
    printf("area = %.2f", area);
    return (EXIT_SUCCESS);
}

