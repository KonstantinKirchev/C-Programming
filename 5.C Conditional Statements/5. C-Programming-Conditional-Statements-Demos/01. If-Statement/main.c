#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int biggerNum, smallerNum;
    int matches = scanf("%d %d", &biggerNum, &smallerNum);
    if (matches != 2)
    {
        printf("Format: <int> <int>");
        return 1;
    }
    
    if (smallerNum > biggerNum)
    {
        biggerNum = smallerNum;
    }
    
    printf("The bigger number is %d\n", biggerNum);
    
    return (EXIT_SUCCESS);
}

