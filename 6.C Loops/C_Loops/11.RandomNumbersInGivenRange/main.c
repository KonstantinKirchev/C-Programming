#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, min, max;
    printf("n = ");
    scanf("%d", &n);
    printf("min = ");
    scanf("%d", &min);
    printf("max = ");
    scanf("%d", &max);  
    
    srand (time(NULL));
    
    int rand_num, i;
    for(i = 0; i < n ; i++){ 
       rand_num = rand() % (max - min + 1) + min;
       printf("%d ", rand_num);
    }
    return (EXIT_SUCCESS);
}

