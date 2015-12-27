#include <stdio.h>
#include <stdlib.h>

int string_length(const char *s);

int main() {
    char buffer[10] = { 'D', 'e', 'r', 'p', '\0' };
    
    int size = string_length(buffer);
    
    printf("%d", size);
    
    return (EXIT_SUCCESS);
}

int string_length(const char *s)
{
    size_t count = 0;
    size_t i = 0;
    
    while(s[i] != '\0')
    {
        count++;
        i++;
    }
    
    return count;
}

