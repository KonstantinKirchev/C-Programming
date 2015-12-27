#include <stdio.h>
#include <stdlib.h>

int main() {
    int hour, minutes;
    char dayPart[3];
    
    printf("The time is: ");
    scanf("%d:%d %s", &hour, &minutes, dayPart);
    
    if (dayPart[0] == 'P') {
        hour += 12;
    }

    if (hour < 13 && hour >= 3 && minutes >=0 && minutes <=59) {
        printf("non-beer time");
    }
    else{
        printf("beer time");
    }

    return (EXIT_SUCCESS);
}

