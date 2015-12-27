#include <stdio.h>
#include <stdlib.h>

int main() {
    int start, end;
    
    printf("Start = ");
    scanf("%d", &start);
    printf("End = ");
    scanf("%d", &end);
    
    int p = 0;
    int i;
    
    for (i = start; i <= end; i++) {
        if (i % 5 == 0) {
            p++;
            if(p == 1){
                printf("%d", i);
            }else{
                printf(", %d", i);
            }     
        }

    }
    printf("\np = %d", p);

    return (EXIT_SUCCESS);
}

