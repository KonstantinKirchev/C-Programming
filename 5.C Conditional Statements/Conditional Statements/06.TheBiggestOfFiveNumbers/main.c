#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d, e, big;
    
    printf("Enter 5 numbers:");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    
    if (a >= b && a >= c && a >= d && a >= e) {
        big = a;
    }
    else if (b >= a && b >= c && b >= d && b >= e) {
        big = b;
    }
    else if (c >= a && c >= b && c >= d && c >= e) {
        big = c;
    }
    else if (d >= a && d >= b && d >= c && d >= e) {
        big = d;
    }
    else if (e >= a && e >= b && e >= c && d >= d) {
        big = e;
    }

    printf("The biggest number is: %.1f",big);
    
    return (EXIT_SUCCESS);
}

