#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int isOdd = 0;
    
    printf("Number = ");
    scanf("%d", &number);
    
    if (number % 2 != 0) {
        isOdd = 1;
        printf("Odd = %d", isOdd);
    }
    else{
        printf("Odd = %d", isOdd);
    }

    return (EXIT_SUCCESS);
}

