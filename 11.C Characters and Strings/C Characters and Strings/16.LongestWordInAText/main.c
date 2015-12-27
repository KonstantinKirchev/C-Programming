#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_BUFFER_LENGTH 4

char *read_line();

int main() {
    char *line = read_line();
    
    char *token = strtok(line, " ");
    char *result = NULL;
    int maxCount = 0;
    
    while (token)
    {
        size_t length = strlen(token);
               
        if (token[length - 1] == '.') {
            token[length - 1] = '\0';
            length--;
        }
        
        if (length > maxCount) {
            maxCount = length;
            result = token;
        }
        
        token = strtok(NULL, " ");
    }
    
    printf("%s", result);
    
    free(line);
    return (EXIT_SUCCESS);
}

char *read_line()
{
    char *line = malloc(INITIAL_BUFFER_LENGTH);
    if (!line)
        return NULL;
  
    size_t i = 0;
    size_t length = INITIAL_BUFFER_LENGTH;
    char ch = getchar();
    while (ch != '\n' && ch != EOF)
    {
        if (i == length - 1)
        {
            char *resized = realloc(line, 2 * length);
            if (!resized)
            {
                // Return everything we've read until resize
                line[i] = '\0';
                return line;
            }
            
            line = resized;
            length *= 2;
        }
        
        line[i] = ch;
        i++;
        
        ch = getchar();
    }
    
    line[i] = '\0';
    return line;
}

