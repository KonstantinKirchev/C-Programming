#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    
    if (a > 0 && b > 0 && c > 0) {
        printf("+");
    }
    else if(a > 0 && b < 0 && c < 0){
        printf("+");
    }
    else if(a < 0 && b > 0 && c < 0){
        printf("+");
    }
    else if(a < 0 && b < 0 && c > 0){
        printf("+");
    }
    else if(a < 0 && b < 0 && c < 0){
        printf("-");
    }
    else if(a < 0 && b > 0 && c > 0){
        printf("-");
    }
    else if(a > 0 && b < 0 && c > 0){
        printf("-");
    }
    else if(a > 0 && b > 0 && c < 0){
        printf("-");
    }
    else{
        printf("0");
    }

    return (EXIT_SUCCESS);
}

