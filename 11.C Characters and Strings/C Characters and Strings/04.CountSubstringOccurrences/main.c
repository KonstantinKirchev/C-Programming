#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char line[200];
    char searchStr[50];

    fgets(line, 200, stdin);
    fgets(searchStr, 50, stdin);

    size_t length = strlen(line);
    size_t searchLength = strlen(searchStr);

    if (line[length - 1] == '\n') {
        line[length - 1] = '\0';
    }

    if (searchStr[searchLength - 1] == '\n') {
        searchStr[searchLength - 1] = '\0';
    }

    int i;
    for (i = 0; i < length; i++) {
        line[i] = tolower(line[i]);
    }
   
    int count = 0;

    const char *tmp = line;
    while (tmp = strstr(tmp, searchStr)) {
        count++;
        tmp++;
    }

    printf("%d", count);

    return (EXIT_SUCCESS);
}

