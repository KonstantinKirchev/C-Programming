#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long factorial(int);

int main() {
    int n, x;
    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%d", &x);
    
    float sum = 1;
    int i;
    for (i = 1; i <= n; i++) {
        sum += factorial(i)/pow(x,i);
    }
    
    printf("%.5f", sum);
    
    return (EXIT_SUCCESS);
}

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

