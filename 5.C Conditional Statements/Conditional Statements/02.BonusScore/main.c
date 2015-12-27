#include <stdio.h>
#include <stdlib.h>

int main() {
    int score;
    
    printf("score = ");
    scanf("%d", &score);
    
    switch (score){
            case 1:
            case 2:
            case 3:
                score *= 10;
                break;
            case 4:
            case 5:
            case 6:
                score *= 100;
                break;
            case 7:
            case 8:
            case 9:
                score *= 1000;
                break;
            default: printf("invalid score"); 
            return (EXIT_SUCCESS);
    }   

    printf("result = %d", score);
    return (EXIT_SUCCESS);
}

