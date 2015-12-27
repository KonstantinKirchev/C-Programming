#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    if (scanf("%d %d", &row, &col) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int i;
    for (i = 0; i < row; i++)
    {
        char letter = 'a' + i;
        int j;
        for (j = 0; j < col; j++)
        {
            printf("%c%c%c ", letter, letter + j, letter);
        }
        
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

