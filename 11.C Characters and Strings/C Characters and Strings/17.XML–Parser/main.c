#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *extract_xml(char *);

int main() 
{
    char *line = NULL;
    size_t size = 0;
    size_t i;
    
    for (i = 0; i < 3; i++)
    {
        getline(&line, &size, stdin);
        if(i != 2)
        {
            printf("\n");
        }
        
        char *data = extract_xml(line);
        if (!data)
            printf("Invalid format");
        else 
            printf("%s", data);
        
        free(data);      
    }
    
    free(line);
    
    return (EXIT_SUCCESS);
}

char *extract_xml(char *line)
{
    char *firstOpeningBracket = strchr(line, '<');
    if (!firstOpeningBracket) return NULL;
    
    char *firstClosingBracket = strchr(firstOpeningBracket + 1, '>');
    if (!firstClosingBracket) return NULL;
    
    char *secondOpeningBracket = strstr(firstClosingBracket + 1, "</");
    if (!secondOpeningBracket) return NULL;
    
    char *secondClosingBracket = strchr(secondOpeningBracket, '>');
    if (!secondClosingBracket) return NULL;
    
    char *firstTag = firstOpeningBracket + 1; 
    firstClosingBracket[0] = '\0';

    char *secondTag = secondOpeningBracket + 2;
    secondClosingBracket[0] = '\0';

    int areEqual = strcmp(firstTag, secondTag) == 0;
    if (!areEqual)
    {
        return NULL;
    }
    
    secondOpeningBracket[0] = '\0';
    char *data = firstClosingBracket + 1;
    firstTag[0] = toupper(firstTag[0]);
   
    char *result = malloc(strlen(firstTag) + strlen(data) + 3);
    if (!result)
        return NULL;
    
    sprintf(result, "%s: %s", firstTag, data);
    return result;
}