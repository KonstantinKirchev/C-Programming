#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void kill(const char *);

void slice(const char *srcFilePath, const char *destinationFile, size_t parts);
void assemble(const char **parts, const char *destinationDirectory);

int main() 
{
    slice("rihanna.jpg", "Slice", 5);
    
    const char *files[] = { "Slice/Part-1.jpg", "Slice/Part-2.jpg", "Slice/Part-3.jpg", 
                             "Slice/Part-4.jpg", "Slice/Part-5.jpg" };
    
    assemble(files, "Merge");
    
    printf("Done!");
    
    return (EXIT_SUCCESS);
}

void kill(const char *msg)
{
    if (errno)
    {
        perror(msg);
    }
    else 
    {   
        fprintf(stderr, "%s\n", msg);
    }
    
    exit(1);
}

void slice(const char *srcFilePath, const char *destinationFile, size_t parts)
{   
    FILE *srcFile = fopen(srcFilePath, "r");
    if (!srcFile)
        kill(srcFilePath);
    
    fseek(srcFile, 0, SEEK_END);
    long long position = ftell(srcFile);
    fseek(srcFile, 0, SEEK_SET);
    
    long long partSize = (position / parts) + 1;
    char buffer[BUFFER_SIZE];
    size_t i;
    for (i = 0; i < parts; i++)
    {
        char name[17];
        sprintf(name, "%s/Part-%lu.jpg", destinationFile, i + 1);
        
        FILE *currentDestFile = fopen(name, "w");
        if (!currentDestFile)
            kill("Could not create a part");
        
        size_t writtenBytes = 0;
        while (writtenBytes <= partSize && !feof(srcFile))
        {
            size_t readBytes = fread(buffer, 1, BUFFER_SIZE, srcFile);
            fwrite(buffer, 1, readBytes, currentDestFile);
            writtenBytes += readBytes;
        }
        
        fclose(currentDestFile);
    }
    
    fclose(srcFile);
}

void assemble(const char **parts, const char *destinationDirectory)
{ 
    char dest[17];
    sprintf(dest, "%s/rihanna.jpg", destinationDirectory);
    FILE *resultFile = fopen(dest, "w");
    if (!resultFile)
        kill(NULL);
    
    char buffer[BUFFER_SIZE];
    size_t i;
    for (i = 0; i < 5; i++)
    {
        FILE *currentPart = fopen(parts[i], "r");
        if (!currentPart)
            kill(NULL);
        
        while (!(feof(currentPart) ||
                ferror(resultFile) || 
                ferror(currentPart)))
        {
            size_t readBytes = fread(buffer, 1, BUFFER_SIZE, currentPart);
            fwrite(buffer, 1, readBytes, resultFile);
        }
        
        fclose(currentPart);
    }
    
    fclose(resultFile);
}