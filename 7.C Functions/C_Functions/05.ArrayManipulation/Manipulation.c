#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Manipulation.h"

int arr_min(char line[])
{   
    char *token;
  
    token = strtok(line, " ");
    
    int min = 2147483647;
    while (token != NULL) {
        
        int num = atoi(token);
        if (num < min) {
            min = num;
        }
        token = strtok(NULL, " ");
    }
    
    return min;
}

int arr_max(char line[])
{   
    char *token;
  
    token = strtok(line, " ");
    
    int max = -214748364;
    while (token != NULL) {
        
        int num = atoi(token);
        if (num > max) {
            max = num;
        }
        token = strtok(NULL, " ");
    }
    
    return max;
}

void arr_clear(char line[])
{   
    char *token;
  
    token = strtok(line, " ");
    int i;
    while (token != NULL) {
        
        line[i] = '0';
        i++;
        token = strtok(NULL, " ");
    }
    line[i] = '\0';
}

double arr_average(char arr[])
{
    double sum;
    char *token;
  
    token = strtok(arr, " ");
   
    int i = 0;
    while( token != NULL ) 
    {
      i++;
      double tempNum = atof(token);
      
      sum += tempNum;
    
      token = strtok(NULL, " ");
    }
    double avg = sum / i;
    
    return avg;
}

double arr_sum(char arr[])
{
    double sum;
    char *token;
  
    token = strtok(arr, " ");
   
   
    while( token != NULL ) 
    {
        
      double tempNum = atof(token);
      
      sum += tempNum;
    
      token = strtok(NULL, " ");
    }
    
    return sum;
}

int arr_contains(char arr[], char element[])
{
    int contains = 0;
    char *token;
    
    token = strtok(arr, " ");
   
    while( token != NULL ) 
    {
        
        if (!strcmp(token, element)) {
           
            contains = 1;
        }
 
      token = strtok(NULL, " ");
    }
    
    return contains;
}

void arr_merge(char arr1[], char arr2[], char output[]){
    
}