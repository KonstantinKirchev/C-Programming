#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846
int main() {
    
    float r;
    printf("r = ");
    scanf("%f", &r);
    float perimeter = 2 * M_PI * r;
    float area = M_PI * r * r;
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);
    return (EXIT_SUCCESS);
}

