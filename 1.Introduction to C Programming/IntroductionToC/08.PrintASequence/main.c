#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    int number;
    for (i = 2; i <= n+1; i++) {
        if (i % 2 == 0) {
            number = i;
        }
        else{
            number = i * -1;
        }
        if(i != n+1){
            printf("%d,", number);
        }
        else{
            printf("%d", number);
        }
    }
    return (EXIT_SUCCESS);
}

