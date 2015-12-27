#include <stdio.h>

void print_sign(int number)
{
    if (number > 0)
        printf("Positive\n");
    else if (number < 0)
        printf("Negative\n");
    else 
        printf("Zero\n");
}

void print_something()
{
    printf("Hello\n");
}

int main() 
{ 
    print_something();
    
    print_sign(0);
    print_sign(3);
    print_sign(-10);
    
    return 0;
}

