#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void copy(const char *srcPath, const char *destPath);
void die(const char *msg);

int main() {

    copy("program.c", "modified.c");

    printf("File copied\n");

    return (EXIT_SUCCESS);
}

void die(const char *msg) {
    if (errno) {
        perror(msg);
    }
    else {
        printf("ERROR: %s\n", msg);
    }
    exit(1);
}

void copy(const char *srcPath, const char *destPath) {
    FILE *srcFile = fopen(srcPath, "r");
    
    if (!srcFile) die(NULL);
    
    FILE *destFile = fopen(destPath, "w");
    
    if (!destFile) die(NULL);
    
    char *line;
    size_t length = 0;
    int i = 0;
    while (!feof(srcFile)) 
    {
        ssize_t readBytes = getline(&line, &length, srcFile);
        char str[3];
        sprintf(str, "%d  ", i);
        fwrite(str, 3, 1, destFile);
        fwrite(line, 1, readBytes, destFile);
        i++;
    }
    
    fclose(destFile);
    fclose(srcFile);
}