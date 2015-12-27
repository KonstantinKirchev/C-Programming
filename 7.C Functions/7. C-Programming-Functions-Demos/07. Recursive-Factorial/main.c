#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int factorial(int n)
{
    if (n == 1)
        return 1;
    
    return n * factorial(n - 1);
}

int main() 
{
    // Debug stack to see recursion in action
    int result = factorial(5);
    printf("%d\n", result);
    
    return (EXIT_SUCCESS);
}

