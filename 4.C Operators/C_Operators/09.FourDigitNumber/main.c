#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int first = (n / 1000) % 10;
    int second = (n / 100) % 10;
    int third = (n / 10) % 10;
    int fourth = n % 10;
    
    int sum = first + second + third + fourth;
    
    printf("sum = %d\n", sum);
    printf("reversed = %d%d%d%d\n", fourth, third, second, first);
    printf("last digit in front = %d%d%d%d\n", fourth, first, second, third);
    printf("second and third digits exchanged = %d%d%d%d", first, third, second, fourth);
    
    return (EXIT_SUCCESS);
}

