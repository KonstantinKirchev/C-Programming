#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringcmp(const void *a, const void *b) 
{ 
    const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    return strcasecmp(*ia, *ib);
} 

int main() {
    char text[1024];

    fgets(text, 1024, stdin);

    size_t length = strlen(text);

    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }


    char *savePtr;
    char *token = strtok_r(text, ", .?!", &savePtr);
    int index = 0;
    char *array[20];

    while (token) {
        char tmp[1024];
        size_t len = strlen(token);

        int i, j;
        for (i = 0, j = len - 1; i < len; i++, j--) {
            tmp[i] = token[j];
        }
        tmp[len] = '\0';
        char *ret;

        ret = strstr(tmp, token);
        if (ret) {
            array[index] = malloc(100);
            strcpy(array[index], ret);
            index++;
        }

        token = strtok_r(NULL, ", .?!", &savePtr);
    }
    
    qsort(array, index, sizeof(char *), stringcmp);

    printf("%s", array[0]);
    int i;
    for (i = 1; i < index; i++) {
        printf(", %s", array[i]);
    }
    
    return (EXIT_SUCCESS);
}

