#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int number;
    int isPrime = 1;
    
    printf("number = ");
    scanf("%d", &number);
    
    if (number < 2 || number > 100) {
        printf("false", number);
        return (EXIT_SUCCESS);
    }
    
    int c;
    for ( c = 2 ; c <= (int)sqrt(number) ; c++ )
    {
      if ( number % c == 0 )
      {
          isPrime = 0;
	  break;
      }
    }
    
    if (isPrime){
       printf("true", number);  
    }
    else{
       printf("false", number); 
    }
      
    return (EXIT_SUCCESS);
}

