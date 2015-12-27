#include <stdio.h>
#include <stdlib.h>

int main() {
    char cardFaces[] = {'2', '3', '4', '5', '6', '7', '8', '9', '1', 'J', 'Q', 'K', 'A'};
    char cardSuits[] = {'C', 'D', 'H', 'S'};
    
    int i;
    for ( i = 0; i < 13; i++) {
        int j; 
        for (j = 0; j < 4; j++) {
            switch(cardFaces[i]){
                case '1':
                    printf("%d%c ", 10, cardSuits[j]);
                    break;
                default:
                    printf("%c%c ", cardFaces[i], cardSuits[j]);
                    break;
            }
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

