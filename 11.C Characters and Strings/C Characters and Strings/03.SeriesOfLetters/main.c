#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[100];
    
    fgets(line, 100, stdin);
    
    size_t length = strlen(line);
    
    if (line[length - 1] == '\n') {
        line[length - 1] = '\0';
    }
    char result[length];
    int i, j = 1;
    result[0] = line[0];
    for (i = 1; i < length; i++) {
        int prevChar = line[i-1];
        int currentChar = line[i];
        
        if (prevChar==currentChar) {
            continue;
        }
        
        result[j++] = currentChar;
    }
    printf("%s", result);

    return (EXIT_SUCCESS);
}

