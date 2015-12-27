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
    
    int product = 1;
    do 
    {
        product *= n;
        n++;
    }
    while (n <= m);
    
    printf("%d\n", product);
    
    return (EXIT_SUCCESS);
}

