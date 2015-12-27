#include <stdio.h>

int main()
{
    int n;
    int matches = scanf("%d", &n);
    if (matches == 0)
    {
        printf("Invalid format");
        return 1;
    }
    
    int sum = 0;
    int currentNum = 1;
    while (currentNum <= n)
    {
        sum += currentNum;
        currentNum++;
    }
    
    printf("%d\n", sum);
    
    return 0;
}