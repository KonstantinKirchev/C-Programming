#include <stdio.h>
#include <stdlib.h>

void print_num(int num);
int is_even(int num);

int is_even(int num)
{
    is_even(num);
    char c = 'A';
    return num % 2 == 0;
}

void print_num(int num)
{
    if (is_even(num))
        printf("Even: %d", num);
    else
        printf("Odd: %d", num);
}

int main() 
{
    // Debug this and analyze stack
    print_num(10);
    
    return (EXIT_SUCCESS);
}

