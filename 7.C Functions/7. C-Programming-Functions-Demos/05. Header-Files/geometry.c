#include "geometry.h"
#include <math.h>

int circles_intersect(double x1, double y1, double r1,
        double x2, double y2, double r2)
{
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;
    double distance = sqrt((deltaX * deltaX) + (deltaY * deltaY));
    
    int intersect = (r1 + r2) >= distance;
    return intersect;
}

int is_valid_triangle(double a, double b, double c)
{
    return a + b > c &&
        a + c > b &&
        b + c > a;
}
