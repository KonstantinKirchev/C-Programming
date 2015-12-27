#include <stdio.h>
#include <stdlib.h>

int get_max(int,int);

int main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    int maxNum = get_max(a, b);
    
    printf("%d", maxNum);
    
    return (EXIT_SUCCESS);
}

int get_max(int a, int b) {
    if (a >= b) {
        return a;
    }
    else{
        return b;
    }

}

