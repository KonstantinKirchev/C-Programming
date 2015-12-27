#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[] = {12, 23, 21, 54, 2, 6, 15, 73};
    int length = sizeof(numbers) / sizeof(int);
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", *(numbers+i));

    }
    return (EXIT_SUCCESS);
}

