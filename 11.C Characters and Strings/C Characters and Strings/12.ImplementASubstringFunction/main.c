#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* substr(char * src, int position, int length);

int main() {
    
    printf("%s", substr("Master Yoda", 13, 5));
    
    return (EXIT_SUCCESS);
}

char* substr(char * src, int position, int length)
{
    size_t size = strlen(src);
    
    if (position > size) 
    {
        return "(empty string)";
    }
    
    char result[length];
    
    int i;
    for (i = 0; i < size; i++) {
        if (i == length) {
            break;
        }

        result[i] = src[position + i];
    }
    
    return result;
}

