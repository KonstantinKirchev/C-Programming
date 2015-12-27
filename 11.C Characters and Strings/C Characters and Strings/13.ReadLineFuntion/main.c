#include <stdio.h>
#include <stdlib.h>

#define INITIAL_BUFFER_LENGTH 4

// Variant 1
char *read_line();

// Variant 2
char *get_line(char **line, size_t *size);

int main() 
{
    // Allocate and free every read line (not very fast)
    char *line = read_line();
    while (strcmp(line, "end"))
    {
        printf("Read line: %s\n", line);
        free(line);
        line = read_line();
    }
    
    free(line);
    
    // Allocate a buffer and reuse it in subsequent get_line() calls
    size_t size = 0;
    char *buffer = NULL;
    line = get_line(&buffer, &size);
    while (strcmp(line, "end"))
    {
        printf("Read line: %s\n", line);
        free(line);
        line = read_line();
    }
    
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

char *get_line(char **bufferPtr, size_t *bufSize)
{
    char *result = *bufferPtr;
    size_t size = *bufSize;
    if (result == NULL)
    {
        result = malloc(INITIAL_BUFFER_LENGTH);
        size = INITIAL_BUFFER_LENGTH;
         if (!result)
            return NULL;
    }
  
    size_t i = 0;
    char ch = getchar();
    while (ch != '\n' && ch != EOF)
    {
        if (i == size - 1)
        {
            char *resized = realloc(result, 2 * size);
            if (!resized)
            {
                return NULL;
            }
            
            result = resized;
            size *= 2;
        }
        
        result[i] = ch;
        i++;
        
        ch = getchar();
    }
    
    result[i] = '\0';
    *bufferPtr = result;
    *bufSize = size;
    
    return result;
}