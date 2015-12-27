#include <stdio.h>

void array_print(int *array, int len)
{
    printf("%d", array[0]);
    int i;
    for (i = 1; i < len; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");
}
