#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 100

int last_occurence_char(char line[LINE_LENGTH], char a);

int main() {
    char line[LINE_LENGTH];
    
    fgets (line, LINE_LENGTH, stdin);
    
    char a;
    printf("char = ");
    scanf("%c", &a);
    
    int index = last_occurence_char(line, a);
    
    printf("%d", index);
    
    return (EXIT_SUCCESS);
}

int last_occurence_char(char line[LINE_LENGTH], char a){
    int length = strlen(line);
    
    if (line[length - 1] == '\n') {
        line[length - 1] == '\0';
    }
    
    int i;
    int index = -1;
    for (i = 0; i < length; i++) {
        if (line[i] == a) {
            index = i;
        }
    }
    return index;
}

