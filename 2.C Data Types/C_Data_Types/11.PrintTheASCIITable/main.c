#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    
    for (i = 0; i < 256; i++) {
        char character = i;
        
        if (i < 33 || i > 126) {
            continue;
        }
        
        printf("%c ", character);
    }
    
    return (EXIT_SUCCESS);
}

