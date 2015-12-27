#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y;
    float r = 1.5;
    
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    
    if ((x - 1) * (x - 1) + (y - 1) * (y - 1) < r * r && x >= 1) {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return (EXIT_SUCCESS);
}

