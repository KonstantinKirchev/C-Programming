#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float x, y;
    float r = 2;
    
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    
    if ((x - 0) * (x - 0) + (y - 0) * (y - 0) <= r * r) {
        printf("Yes");
    }
    else{
        printf("No");
    }

    return (EXIT_SUCCESS);
}

