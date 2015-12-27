#include <stdio.h>
#include <stdlib.h>

int main() {
    //34.567839023, 12.345, 8923.1234857, 3456.091
    double doubleNumOne = 34.567839023;
    float floatNumOne = 12.345;
    double doubleNumTwo = 8923.1234857;
    float floatNumTwo = 3456.091;
    printf("%.9f\n%.3f\n%.7f\n%.3f", doubleNumOne, floatNumOne, doubleNumTwo, floatNumTwo);
    return (EXIT_SUCCESS);
}

