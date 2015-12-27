#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[12];
    scanf("%s",input);
   const char s[2] = ".";
   char *token;
   int yearNow = 2015;
   
   /* get the first token */
   token = strtok(input, s);
   
   char* year;
   int i = 0;
   /* walk through other tokens */
   while( token != NULL ) 
   {
      i++;
      if(i == 3){
      year = token;    
      }
      token = strtok(NULL, s);
   }
   int num = atoi(year);
   int yearsOld = yearNow - num;
   printf("Now: %d\n", yearsOld);
   printf("After 10 years: %d", yearsOld + 10);
    return (EXIT_SUCCESS);
}

