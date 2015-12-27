#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char text[21];
    int j;
    for (j = 0; j < 21; j++) {
        text[j] = '\0';
    }
    
    fgets(text, 21, stdin);
    size_t length = strlen(text);

    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }

    int i;
    for (i = 0; i < 20; i++) {
        if (text[i] == '\0') {
            text[i] = '*';
        }
    }
    
    printf("%s", text);

    return (EXIT_SUCCESS);
}

