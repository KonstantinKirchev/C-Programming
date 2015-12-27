#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    if ((n / 100) % 10 == 7) {
        printf("true");
    }
    else{
        printf("false");
    }
    
    return (EXIT_SUCCESS);
}

