// Compile with -std=c99 flag

#include <stdio.h>
#include <stdlib.h>

int main() 
{   
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    if ((a + b) == (c + d))
                    {
                        printf("%d%d%d%d", a, b, c, d);
                    }
                }
            }
        }
    }
    
    return (EXIT_SUCCESS);
}
