#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int fib1 = 0, fib2 = 1, fib3, num, count = 0;
 
    printf("Enter the value of num ");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are: ", num);
    if(num == 0 || num == 1){
        printf("%d ", fib1);    
    }
    else{
        printf("%d ", fib1);
        printf("%d ", fib2);
        count = 2;
        while (count < num)
        {
            fib3 = fib1 + fib2;
            count++;
            printf("%d ", fib3);
            fib1 = fib2;
            fib2 = fib3;
        }
    }
    
    return (EXIT_SUCCESS);
}

