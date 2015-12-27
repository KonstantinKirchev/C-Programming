#include <stdio.h>
#include <stdlib.h>

void swap(void *a, void *b, size_t length)
{
    char *ptrA = a;
    char *ptrB = b;
    size_t i;
    for (i = 0; i < length; i++) {
        *(ptrA + i) = *(ptrA + i) ^ *(ptrB + i);
        *(ptrB + i) = *(ptrA + i) ^ *(ptrB + i);
        *(ptrA + i) = *(ptrA + i) ^ *(ptrB + i);
    }
}

int main() {
    char letter = 'B', symbol = '+';
    int a = 10, b = 6;
    double d = 3.14, f = 1.23567;
    
    swap(&letter, &symbol, sizeof(char));
    swap(&a, &b, sizeof(int));
    swap(&d, &f, sizeof(double));
    
    printf("letter = %c\nsymbol = %c\n", letter, symbol);
    printf("a = %d\nb = %d\n", a, b);
    printf("d = %.2f\nf = %.2f\n", d, f);
    
    return (EXIT_SUCCESS);
}

