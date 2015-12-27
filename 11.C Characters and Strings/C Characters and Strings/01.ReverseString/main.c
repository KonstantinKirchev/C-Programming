#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[100];
    
    fgets(line, 100, stdin);
    
    size_t length = strlen(line);
    
    char reverse[length];
    
    int c, d;
    for (c = length - 1, d = 0; c >= 0; c--, d++){
        reverse[d] = line[c];
    }
      
    reverse[d] = '\0';
    
    printf("%s\n", reverse);
    
    return (EXIT_SUCCESS);
}

