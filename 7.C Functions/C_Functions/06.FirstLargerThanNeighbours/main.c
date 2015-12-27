#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int first_larger_than_neighbours(char *input);

int main() {
    char input[1024];
    fgets(input, 1024, stdin);
    int length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    
    int index = first_larger_than_neighbours(input);
    
    printf("%d", index);
    
    return (EXIT_SUCCESS);
}

int first_larger_than_neighbours(char *input)
{
    char *token;
 
    token = strtok(input, ", ");
    int index = 0;
    int greatIndex = -1;
    int previousNum = NULL;
   
    while( token != NULL ) 
    {
       int currentNum = atoi(token); 
       if (previousNum != NULL && currentNum > previousNum) {
           greatIndex = index;
       }
       else if(currentNum < previousNum){
          
           return greatIndex;
       }
       else if(currentNum == previousNum){
           
           return -1;
       }
    
       token = strtok(NULL, ", ");
       previousNum = currentNum;
       index++;
    }
}

