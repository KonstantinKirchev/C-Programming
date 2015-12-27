#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char *dest, const char *src, size_t n);

int main() {
    char buffer[10] = "C";
    concat(buffer, " is cool", 8);
    
    printf("%s", buffer);
    
    return (EXIT_SUCCESS);
}

char* concat(char *dest, const char *src, size_t n)
{
    size_t length = strlen(dest);
    int i;
    for (i = 0; i < n; i++) {
        dest[length + i] = src[i];
    }
    
    return dest;
}