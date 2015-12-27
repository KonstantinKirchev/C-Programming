#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, m;
    int matches = scanf("%d %d", &n, &m);
    if (matches < 2)
    {
        printf("Invalid format");
        return 1;
    }
    
    int num;
    for (num = n; num <= m; num++)
    {
        int divider = 2;
        int isPrime = 1;
        int end = (int) sqrt(num);
        while (divider <= end)
        {
            int remainder = num % divider;
            if (remainder == 0)
            {
                isPrime = 0;
                break;
            }
            
            divider++;
        }
        
        if (isPrime)
        {
            printf("%d ", num);
        }
    }
    return (EXIT_SUCCESS);
}

