#include <stdio.h>
#include <stdlib.h>

long double factorial(int);

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    long double result = factorial(2 * n) / (factorial(n + 1) * factorial(n));
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

