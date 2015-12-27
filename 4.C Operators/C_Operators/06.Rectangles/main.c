#include <stdio.h>
#include <stdlib.h>

int main() {
    float width;
    float height;
    
    printf("width = ");
    scanf("%f", &width);
    
    printf("height = ");
    scanf("%f", &height);
    
    float perimeter = width * 2 + height * 2;
    float area = width * height;
    
    if (perimeter - (int)perimeter) {
        printf("Perimeter = %.1f\n", perimeter);
    }
    else{
        printf("Perimeter = %d\n", (int)perimeter);        
    }
    
    if (area - (int)area) {
        printf("Area = %.1f", area);
    }
    else{
        printf("Area = %d\n", (int)area);        
    }
    
    return (EXIT_SUCCESS);
}

