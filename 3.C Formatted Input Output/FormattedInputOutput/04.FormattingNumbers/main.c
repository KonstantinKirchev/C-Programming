#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int a;
    float b;
    float c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    if (a < 0 || a > 500) {
        printf("Please enter A again. Must be in the range [0..500]");
        scanf("%d", &a);
    }
    char binNum[11] = "";
    int d;
    for (d = 9; d >= 0; d--)
    {
        int k = a >> d;
        if (k & 1){
            strcat(binNum, "1");
        }
        else{
            strcat(binNum, "0");
        }
          
    }
    char *format = "|%-10X|%10s|%10.2f|%-10.3f|\n";
    printf(format, a, binNum, b, c);
    return (EXIT_SUCCESS);
}

