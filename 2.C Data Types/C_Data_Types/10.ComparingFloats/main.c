#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double eps = 0.000001;
    double a;
    double b;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    if (a >= b) {
        double c = a - b;
        
        if (c >= eps) {
            printf("flase");
        }
        else{
            printf("true");
        }
    }
    else{
        double c = b - a;
        
        if (c >= eps) {
            printf("false");
        }
        else{
            printf("true");
        }
    }

    return (EXIT_SUCCESS);
}

