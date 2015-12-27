#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    int matches = scanf("%d", &num);
    if (matches != 1)
    {
        printf("Invalid number format\n");
        return 1;
    }
    
    if (num % 2 == 0)
    {
        printf("even\n");
    }
    else 
    {
        printf("odd\n");
    }
    
    return (EXIT_SUCCESS);
}

