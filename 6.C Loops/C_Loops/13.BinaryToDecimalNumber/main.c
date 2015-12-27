#include <stdio.h>
#include <stdlib.h>

int main() {
    int decimal_num;
    int size = (sizeof(decimal_num) * 8);
    char binary[size];
    
    printf("binary = ");
    fgets(binary, size, stdin);
    
    int i;
    int decimalNum = 0;
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1') {
            decimalNum = decimalNum * 2 + 1;
        }
        else if(binary[i] == '0'){
            decimalNum = decimalNum * 2;
        }
    }
    printf("decimal = %d", decimalNum);

    return (EXIT_SUCCESS);
}

