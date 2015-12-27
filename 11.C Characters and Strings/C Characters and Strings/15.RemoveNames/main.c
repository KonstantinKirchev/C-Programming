#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *firstArray = NULL, *secondArray = NULL;
    size_t sizeFirst = 0, sizeSecond = 0;
    
    size_t firstLength = getline(&firstArray, &sizeFirst, stdin);
    getline(&secondArray, &sizeSecond, stdin);
    
    char *token = strtok(secondArray, " ");
    
    while (token)
    {
        size_t length = strlen(token);
       
        char *substr = strstr(firstArray, token);
        
        while (substr)
        {
            size_t index = substr - firstArray;
            
            memmove(&firstArray[index],&firstArray[index + length + 1], firstLength - index);
            substr = strstr(firstArray, token);
        }
        
        token = strtok(NULL, " ");
    }
    
    printf("%s", firstArray);
    
    free(firstArray);
    free(secondArray);
    
    return (EXIT_SUCCESS);
}

