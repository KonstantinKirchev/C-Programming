#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

void swap(int *a, int *b) {

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;

}

int main() {
    int *a, *b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    swap(&a, &b);
    
    printf("a = %d\nb = %d\n", a, b);
    
    return (EXIT_SUCCESS);
}

