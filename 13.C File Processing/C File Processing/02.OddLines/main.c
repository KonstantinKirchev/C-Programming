#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("main.c", "r");

    size_t i = 0;
    if (file) {
        char *line;
        size_t length = 0;
        while (1) {
            i++;
            ssize_t readBytes = getline(&line, &length, file);
            if (feof(file) && readBytes <= 0)
            {
                break;
            }
    
            if (i % 2 != 0) {
                printf("%s\n", line);
            }
        }
        free(line);
    }

    return (EXIT_SUCCESS);
}

