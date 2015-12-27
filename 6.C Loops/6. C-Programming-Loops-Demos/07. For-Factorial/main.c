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
    
    int factorial = 1, i;
    for (i = n; i > 1; i--)
    {
        factorial *= i;
    }
    
    printf("%d\n", factorial);
    
    return (EXIT_SUCCESS);
}

