#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int matches = scanf("%d", &n);
    if (matches == 0)
    {
        printf("Invalid format");
        return 1;
    }
    
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

