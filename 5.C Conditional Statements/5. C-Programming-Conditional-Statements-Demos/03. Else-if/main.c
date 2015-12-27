#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = getchar();
    
    if (ch == 'a')
    {
        printf("ei");
    }
    else if (ch == 'b')
    {
        printf("bi");
    }
    else if (ch == 'c')
    {
        printf("si");
    }
    else 
    {
        printf("Invalid letter");
    }
    
    return (EXIT_SUCCESS);
}

