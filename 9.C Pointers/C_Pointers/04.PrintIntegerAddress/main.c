#include <stdio.h>
#include <stdlib.h>

void memory_print(int *num)
{
    printf("%p", &num);
}

int main() {
    int number;
    printf("number = ");
    scanf("%d", &number);
    
    printf("%p\n", &number);
    
    memory_print(&number);
    
    return (EXIT_SUCCESS);
}

