#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double reverse_number(char *number,int length, int *error);

int main() {
    char number[10];
    printf("number = ");
    scanf("%s", number);
    
    int length = strlen(number);
    int error;
    double result = reverse_number(number, length, &error);
    
    if (error == 0) {
        printf("reversed = %.3f", result);
    }
    else if(error == 1){
        printf("Invalid format");
    }

    return (EXIT_SUCCESS);
}

double reverse_number(char *number,int length, int *error)
{      
    char reversed[length];
    int i, j;
    for (i = length - 1, j = 0; i >= 0; i--,j++) {
        reversed[j] = number[i];
    }
    double ftemp = atof(reversed);
    
    if (number == NULL || ftemp == 0.000) {
        *error = 1;
        return 0;          
    }
    
    *error = 0;
    
    return ftemp;
}

