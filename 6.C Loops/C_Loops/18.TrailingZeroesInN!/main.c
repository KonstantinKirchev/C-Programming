#include <stdio.h>
#include <stdlib.h>
#include<inttypes.h>

long double factorial(int);

int main() {
    int n, k;
    printf("n = ");
    scanf("%d", &n);
    
    long double result = factorial(n);
    int end = 1;
    int number;
    int devider = 10;
    int f = 1;
    int count = 0;
    while(end){
        number = (int)(result / f) % devider;
        if (number == 0) {
            count++;
        }
        else{
            end = 0;
        }
        f *= 10;
    }
    //printf("result = %.0Lf\n", result);
    printf("trailing zeroes of n! are: %d", count);
    return (EXIT_SUCCESS);
}

long double factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

