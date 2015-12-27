#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wc(char * input, char delimiter);

int main() {
    int count = wc("Hard Rock, Hallelujah!", ' ');
       
    printf("%d", count);
    
    return (EXIT_SUCCESS);
}

int wc(char * input, char delimiter)
{
    size_t count = 0;
    size_t length = strlen(input);
    
    int i;
    for (i = 0; i < length; i++) {
        if (input[i] == delimiter) {
            count++;
        }
    }
    
    return ++count;

}

