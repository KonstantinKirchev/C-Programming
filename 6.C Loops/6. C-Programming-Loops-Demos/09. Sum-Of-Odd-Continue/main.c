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
    
    int sum = 0, i;
    for (i = 1; i <= n; i += 2)
    {
        if (i % 7 == 0)
        {
            continue;
        }
        
        sum += i;
    }
    
    printf("Sum = %d", sum);
    
    return (EXIT_SUCCESS);
}

