#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    char *input = "sadsa";
    char *remainder;
    long result = strtol(input, &remainder, 10);
    
    if (remainder == input)
    {
        printf("Invalid number format.");
    }
    else 
    {
        printf("%d", result);
    }
    
    return (EXIT_SUCCESS);
}

