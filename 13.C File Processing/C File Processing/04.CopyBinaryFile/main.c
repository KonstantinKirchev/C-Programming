#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void copy(const char *srcPath, const char *destPath);
void die(const char *msg);

int main() {
    
    copy("lambo.jpg", "lambo_copy.jpg");
    
    printf("File copied\n");
    
    return (EXIT_SUCCESS);
}

void die(const char *msg) {
    if (errno) {
        perror(msg);
    } else {

        printf("ERROR: %s\n", msg);
    }
    exit(1);
}

void copy(const char *srcPath, const char *destPath) {
    FILE *srcFile = fopen(srcPath, "r");
    if (!srcFile) die(NULL);
            FILE * destFile = fopen(destPath, "w");
        if (!destFile) die(NULL);
                char buffer[BUFFER_SIZE];
            while (!feof(srcFile)) {
                size_t readBytes = fread(buffer, 1, BUFFER_SIZE, srcFile);
                        fwrite(buffer, 1, readBytes, destFile);
            }
    fclose(destFile);
    fclose(srcFile);
}

