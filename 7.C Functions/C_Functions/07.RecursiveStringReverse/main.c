#include <stdio.h>
#include <stdlib.h>

void reverse(char str1[], char revStr[], int index, int size);

int main() {
    char input[1024];
    
    fgets(input, 1024, stdin);
    
    int length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    
    int size = strlen(input);
    
    char output[1024];
    reverse(input, output, 0, size - 1);
    
    printf("%s", output);
    
    return (EXIT_SUCCESS);
}

void reverse(char str[], char revStr[], int index, int size)
{
    revStr[index] = str[size - index];    
    if (index == size + 1)
    {
        return;
    }
    reverse(str, revStr, index + 1, size);
}

