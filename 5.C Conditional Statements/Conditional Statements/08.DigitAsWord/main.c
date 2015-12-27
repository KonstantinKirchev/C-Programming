#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[1024];
    char *pointer;
    int digit;
    
    printf("Enter a digit in the range[0..9] ");
    fgets(input, 1024, stdin);
    digit = strtol(input, &pointer, 10);
    
    if (input == pointer) {
        printf("not a digit");
        return (EXIT_SUCCESS);
    }
    
    if (pointer[0] == '.') {
        printf("not a digit");
        return (EXIT_SUCCESS);
    }
        switch (digit){
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            default: printf("not a digit"); 
        } 
    return (EXIT_SUCCESS);
}

