#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int num;
    int matches = scanf("%d", &num);
    if (matches == 0)
    {
        printf("Invalid format");
        return 1;
    }
    
    if (num < 0)
    {
        num *= -1;
    }
    
    int count = 2;
    int isPrime = 1;
    int end = (int) sqrt(num);
    while (count <= end && isPrime)
    {
        int remainder = num % count;
        if (remainder == 0)
        {
            isPrime = 0;
        }
        
        count++;
    }
    
    printf(isPrime ? "Prime" : "Not a prime");
    
    return (EXIT_SUCCESS);
}
