#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4

int main()
{
    FILE *file = fopen("main.c", "r");
    
    if(file)
    {
        char buffer[BUFFER_SIZE];
        
        while(!feof(file))
        {
            int readBytes = fread(buffer, 1, BUFFER_SIZE, file);
            buffer[readBytes] = '\0';
            printf("%s", buffer);
        }     
    }
    
    return (EXIT_SUCCESS);
}

