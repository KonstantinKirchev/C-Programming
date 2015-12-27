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
    
    int result = 1, i;
    for (i = 0; i < m; i++)
    {
        result *= n;
    }
    
    printf("%d\n", result);
 
    return (EXIT_SUCCESS);
}
