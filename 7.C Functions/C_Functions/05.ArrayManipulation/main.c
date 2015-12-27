#include <stdio.h>
#include <stdlib.h>
#include "Manipulation.h"

#define LINE_LENGTH 100

int main() {
    char line[LINE_LENGTH];
    
    fgets (line, LINE_LENGTH, stdin);
    int length = strlen(line);
    if (line[length - 1] == '\n') {
        line[length - 1] = '\0';
    }
    
    //int min = arr_min(line);
    //printf("%d\n", min);
    //int max = arr_max(line);
    //printf("%d\n", max);
    //arr_clear(line);   
    //printf("%s", line);
    //double avg = arr_average(line);
    //printf("%.2f\n", avg);
    //double sum = arr_sum(line);
    //printf("%.2f\n", sum);
    printf("%s", arr_contains(line, "333") == 1 ? "true" : "false");
    
    return (EXIT_SUCCESS);
}

