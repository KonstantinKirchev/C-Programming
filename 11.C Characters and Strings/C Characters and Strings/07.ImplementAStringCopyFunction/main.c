#include <stdio.h>
#include <stdlib.h>

char* copy_string(char *dest,char *sorce, size_t num);

int main() {
    char buffer[0];
    
    copy_string(buffer, "C is cool", 0);
    
    if(buffer[0] == '\0'){
        printf("(empty string)");
    }
    else{
        printf("%s", buffer);
    }
    
    return (EXIT_SUCCESS);
}

char* copy_string(char *dest,char *sorce, size_t num)
{   
    int i;
    for (i = 0; i < num; i++) {
        dest[i] = sorce[i];
    }
    dest[num] = '\0';
    
    return dest;  
}

