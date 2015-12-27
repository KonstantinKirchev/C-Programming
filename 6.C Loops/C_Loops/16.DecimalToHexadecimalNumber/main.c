#include <stdio.h>
#include <stdlib.h>

    int main()
    {
      int count = 0, i = 0;
      unsigned long digit, n;
      int hex[5];
      printf("enter a number = ");
      scanf("%lu",&n);
      printf("hexadecimal = ");
      if(n<10)
      {
          printf("%d",n);
      }
      switch(n)
      {
          case 10:
              printf("A");
            break;
          case 11:
              printf("B");
            break;
          case 12:
              printf("B");
            break;
          case 13:
              printf("C");
            break;
          case 14:
              printf("D");
            break;
          case 15:
              printf("E");
            break;
          case 16:
              printf("F");
            break;
          default:;
       }

       while(n>16)
       {
          digit = n % 16;
          hex[i] = digit;
          i++;
          count++;
          n = n / 16;
       }
       hex[i]=n;
       for(i=count;i>=0;i--)
       {
          switch(hex[i])
          {
             case 10:
                 printf("A");
               break;
             case 11:
                 printf("B");
               break;
             case 12:
                 printf("C");
               break;
             case  13:
                 printf("D");
               break;
             case 14:
                 printf("E");
               break;
             case 15:
                 printf("F");
               break;
             default:
                 printf("%d",hex[i]);
          }
    }

    return 0;
}

