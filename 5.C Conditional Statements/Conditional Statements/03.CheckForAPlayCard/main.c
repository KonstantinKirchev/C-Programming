#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char character;
    
    printf("character = ");
    scanf("%c", &character);
    
    char cards[14] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K', 'A'};
    
    if (character == 10) {
        character = 1;
    }
    
    int i;
    int isFound = 0;
        for (i = 0; i < 14; i++) {
            if (cards[i] == character){
                isFound = 1;
            }    
        }
    
    if (isFound) {
        printf("yes");
    }
    else{
        printf("no");
    }

    return (EXIT_SUCCESS);
}

