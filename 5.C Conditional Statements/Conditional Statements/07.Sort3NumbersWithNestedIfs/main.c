#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,b,c,big;
    
    printf("Enter 3 numbers:");
    scanf("%f %f %f",&a,&b,&c);
    
    if (a >= b && a >= c) {
        if (b >= c) {
            printf("%.1f %.1f %.1f", a, b, c);
        }
        else{
            printf("%.1f %.1f %.1f", a, c, b);
        }
    }
    else if(b >= a && b >= c){
        if (a >= c) {
            printf("%.1f %.1f %.1f", b, a, c);
        }
        else{
            printf("%.1f %.1f %.1f", b, c, a);
        }
    }
    else if(c >= a && c >= b){
        if (a >= b) {
            printf("%.1f %.1f %.1f", c, a, b);
        }
        else{
            printf("%.1f %.1f %.1f", c, b, a);
        }
    }
    return (EXIT_SUCCESS);
}

