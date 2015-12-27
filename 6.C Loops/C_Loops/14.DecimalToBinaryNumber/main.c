#include <stdio.h>
#include <stdlib.h>

int main() {
    int decimal_num;
    int size = (sizeof(decimal_num) * 8);
    int number;
    
    printf("decimal = ");
    scanf("%d", &number);
    
    char result[size];
    int i = 0;
    while(number){
        result[i] = '0' + number % 2;
        number /= 2;
        i++;
    }
    result[i] = '\0';
    
    int j;
    printf("binary = ");
    for (j = i-1; j >= 0; j--) {
        printf("%c", result[j]);
    }
    
    return (EXIT_SUCCESS);
}

