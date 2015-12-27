#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace_digits(char *str);

char *replace_digits(char *str)
{
    int length = strlen(str);
    int i;
    for (i = 0; i < length; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            str[i] = '/';
        }
    }
    return str;
}

int main() {
    char text[] = "The Cold War is believed to be between the period 1947-1999.";
    char *result = replace_digits(&text);
    int i;
    for (i = 0; i < strlen(result); i++) {
        printf("%c", result[i]);
    }
    
    return (EXIT_SUCCESS);
}

