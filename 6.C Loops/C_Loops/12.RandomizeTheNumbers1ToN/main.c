#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int num[n];
    int i;
    for (i = 1; i <= n; i++) {
        num[i-1] = i; 
    }
    srand (time(NULL));
    int j;
    int rand_index;
    for (j = 0; j < n; j++) {
        rand_index = j + rand() % (n - j);
        printf("%d ", num[rand_index]);
        num[rand_index] = num[j];
    }

    return (EXIT_SUCCESS);
}

