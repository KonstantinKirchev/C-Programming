#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int day;
    int matches = scanf("%d", &day);
    if (matches != 1)
    {
        printf("Invalid number format");
        return 1;
    }
    
    switch (day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default: 
            printf("Invalid day of week");
    }
    
    return (EXIT_SUCCESS);
}

