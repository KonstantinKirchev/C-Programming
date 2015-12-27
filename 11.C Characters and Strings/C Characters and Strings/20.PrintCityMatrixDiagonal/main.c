#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_BUFFER_LENGTH 4

char *read_line();

int main() {
    char *array = read_line();
    int n = atoi(array);

    int i;
    for (i = 0; i < n; i++) {
        
        array = read_line();

        char *token = strtok(array, " ");
        
        int index = 0;
        
        if (i == 0) {
             printf("\n");
        }

        while (token) {
            
            if (i == index) {
                printf("%s\n", token);
                break;
            }
            index++;
            token = strtok(NULL, " ");
        }
    }


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

