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
    
    int factorial = 1;
    while (1)
    {
        if (n == 1)
        {
            break;
        }
        
        factorial *= n;
        n--;
    }
    
    printf("%d\n", factorial);
    
    return (EXIT_SUCCESS);
}

