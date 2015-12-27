#include <stdio.h>

void print_triangle(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        
        printf("\n");
    }
    
    for (row = n - 1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        
        printf("\n");
    }     
}

int main() 
{
    print_triangle(6);
    
    return 0;
}

