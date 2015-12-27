#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double a, b;
    int matches = scanf("%lf %lf", &a, &b);
    if (matches != 2)
    {
        printf("Format: <int> <int>");
        return 1;
    }
    
    
    if (a == b)
    {
        printf("Numbers are equal");
    }
    else 
    {
        if (a > b)
        {
            printf("%.2f is bigger", a);
        }
        else 
        {
            printf("%.2f is bigger", b);
        }
    }
    
    return (EXIT_SUCCESS);
}

