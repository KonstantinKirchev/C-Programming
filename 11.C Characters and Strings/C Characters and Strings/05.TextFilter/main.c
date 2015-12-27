#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char words[200];
    char text[1024];

    fgets(words, 200, stdin);
    fgets(text, 1024, stdin);

    size_t lengthWords = strlen(words);
    size_t length = strlen(text);

    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }
    if (words[lengthWords - 1] == '\n') {
        words[lengthWords - 1] = '\0';
    }

    char *token;

    token = strtok(words, ", ");
    
    while (token != NULL) {
        char *tmp = text;
        while (tmp = strstr(tmp, token)) {
            memset(tmp, '*', strlen(token));
            tmp++;
        }
        token = strtok(NULL, ", ");
    }
    printf("%s", text);
    return (EXIT_SUCCESS);
}

