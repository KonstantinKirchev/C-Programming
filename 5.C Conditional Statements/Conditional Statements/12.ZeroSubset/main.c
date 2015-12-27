#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e, sum;
    int isThere = 0;
    
    printf("Please enter 5 integer numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a == 0 && b == 0 && c == 0 && d == 0 && e ==0) 
    {
        isThere = 1;
        printf("%d + %d + %d + %d + %d = 0\n", a, b, c, d, e);
        return (EXIT_SUCCESS);
    }
            if (a + b == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", a, b);
            }
            if (a + c == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", a, c);
            }
            if (a + d == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", a, d);
            }
            if (a + e == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", a, e);
            }
            if (b + c == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", b, c);
            }
            if (b + d == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", b, d);
            }
            if (b + e == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", b, e);
            }
            if (c + d == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", c, d);
            }
            if (a + b + c == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", a, b, c);
            }
            if (a + b + d == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", a, b, d);
            }
            if (a + b + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", a, b, e);
            }
            if (a + c + d == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", a, c, d);
            }
            if (a + c + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", a, c, e);
            }
            if (a + d + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", a, d, e);
            }
            if (b + c == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", b, c);
            }
            if (b + d == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", b, d);
            }
            if (b + e == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", b, e);
            }
            if (b + c + d == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", b, c, d);
            }
            if (b + c + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", b, c, e);
            }
            if (b + d + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", b, d, e);
            }
            if (c + d == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", c, d);
            }
            if (c + e == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", c, e);
            }
            if (c + d + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d = 0\n", c, d, e);
            }
            if (d + e == 0)
            {
                isThere = 1;
                printf("%d + %d = 0\n", d, e);
            }
            if (a + b + c + d == 0)
            {
                isThere = 1;
                printf("%d + %d + %d + %d = 0\n", a, b, c, d);
            }
            if (a + b + c + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d + %d = 0\n", a, b, c, e);
            }
            if (a + b + d + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d + %d = 0\n", a, b, d, e);
            }
            if (a + c + d + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d + %d = 0\n", a, c, d, e);
            }
            if (b + c + d + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d + %d = 0\n", b, c, d, e);
            }
            if (a + b + c + d + e == 0)
            {
                isThere = 1;
                printf("%d + %d + %d + %d + %d = 0\n", a, b, c, d, e);
            }
            if (isThere == 0)
            {
                printf("no zero subset");
            }       
    
    return (EXIT_SUCCESS);
}

