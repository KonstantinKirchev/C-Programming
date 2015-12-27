#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 4

char* read_line();

char* read_line() {

    char *line = calloc(INITIAL_SIZE, 1);
    size_t size = 0;
    size_t length = getline(&line, &size, stdin);

    if (!line) {
        printf("Not enough memory for initial array\n");
        return NULL;
    }

    size_t arrayLength = INITIAL_SIZE;
    
    char *newLine = NULL;
    
    if (length >= arrayLength) {
        
        size_t newBufferSize = length + 1;
        newLine = realloc(line, newBufferSize);
        
        if (!newLine) {
            printf("Not enough when resizing array\n");
            return NULL;
        }

        line = newLine;
        arrayLength = newBufferSize;
    }

    line = newLine;
    arrayLength *= 2;

    return line;

}

int main() {
//    fgets();
//    fflush(stdin);
    char *ptr = read_line();
    printf("%s", ptr);
//    int length = strlen(ptr);
//    int i;
//    for (i = 0; i < length; i++) {
//        printf("%c", ptr[i]);
//    }

    free(ptr);

    return (EXIT_SUCCESS);
}

