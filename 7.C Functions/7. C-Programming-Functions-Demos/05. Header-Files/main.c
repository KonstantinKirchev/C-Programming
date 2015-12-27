#include <stdio.h>
#include "geometry.h"

int circles_intersect(double x1, double y1, double r1,
        double x2, double y2, double r2);

int is_valid_triangle(double a, double b, double c);

int main(int argc, char** argv) 
{
    char *name = "Pesho";
    name[0] = 'a';
    
    int intersects = circles_intersect(0, 0, 1, 2, 2, 0.5);
    printf("%d\n", intersects);
    int valid = is_valid_triangle(3, 3, 20);
    printf("%d\n", valid);
    return 0;
}

