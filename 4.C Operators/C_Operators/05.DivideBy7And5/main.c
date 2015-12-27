#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int hasRemainder = 0;
    
    printf("Number = ");
    scanf("%d", &number);
    
    if (number % 7 == 0 && number % 5 == 0 && number != 0) {
        hasRemainder = 1;
        printf("Result = %d", hasRemainder);
    }
    else{
        hasRemainder = 0;
        printf("Result = %d", hasRemainder);
    }
    
    return (EXIT_SUCCESS);
}

