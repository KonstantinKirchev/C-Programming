#include <stdio.h>
#include <stdlib.h>

int main() {
    char number[1024];
    int position;
    printf("Enter number = ");
    scanf("%s", number);
    printf("Enter position = ");
    scanf("%d", &position);
    
    long num = strtol(number, NULL, 10);
    
    int digit = 0;
    int j;
    int posNum = 1;
    
    for (j = 1; j < position; j++) {
        posNum *= 10; 
    }
    digit = (num / posNum) % 10;
    
    if (digit == 0) {
        printf("-");
    }
    else{
        printf("%d", digit);
    }
    
    return (EXIT_SUCCESS);
}

