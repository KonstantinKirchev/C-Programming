#include <stdio.h>
#include <stdlib.h>

long double factorial(int);

int main() {
    int n, k;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    
    long double result = factorial(n) / (factorial(k) * factorial(n - k) );
    printf("result = %.0Lf", result);
    
    return (EXIT_SUCCESS);
}

long double factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

