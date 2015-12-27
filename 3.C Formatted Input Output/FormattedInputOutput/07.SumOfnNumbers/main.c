#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    float number;
    float sum;
    for (i = 0; i < n; i++) {
        scanf("%f", &number);
        sum += number;
    }
    printf("Sum = %.1f", sum);
    return (EXIT_SUCCESS);
}

