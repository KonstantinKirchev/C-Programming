#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strsearch(char * src, char * substr);

int main() {
    
    printf("%d", strsearch("Coolness", "cool"));
    
    return (EXIT_SUCCESS);
}

int strsearch(char * src, char * substr)
{
    size_t length = strlen(src);
    size_t lengthSub = strlen(substr);
    char temp[lengthSub];
    
    int i;
    for (i = 0; i < length; i++) {
        int j;
        for (j = 0; j < lengthSub; j++) {
            temp[j] = src[i + j];
        }
        if (strcmp(temp,substr) == 0) {
            return 1;
        }
    }
    
    return 0;
}

