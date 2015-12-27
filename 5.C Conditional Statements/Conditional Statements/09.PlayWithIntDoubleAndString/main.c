#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    int number;
    double doubleNum;
    char word[1024];
  
    printf("Please choose a type:\n1 --> int\n2 --> double\n3 --> string\n");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf("Please enter an integer: ");
            scanf("%d", &number);
            printf("%d", number + 1);
            break;
        case 2:
            printf("Please enter a double: ");
            scanf("%lf", &doubleNum);
            printf("%.1lf", doubleNum + 1);
            break;
        case 3:
            printf("Please enter a string: ");
            scanf("%s", word);
            printf("%s*", word);
            break;
        default: 
            printf("Invalid choice!");
            break;
    }

    return (EXIT_SUCCESS);
}

