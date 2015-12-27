#include <stdio.h>
#include <stdlib.h>

const char *last_digit(int a);

int main() {
    int a;
    printf("number = ");
    scanf("%d", &a);
    
    char *lastDigit = last_digit(a);
    
    printf("The last digit is %s.", lastDigit);
    
    return (EXIT_SUCCESS);
}

const char *last_digit(int a){
    
    int lastDigit = a % 10;
    
    switch(lastDigit){
        case 0:
            return "zero";
            break;
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;
    }
}

