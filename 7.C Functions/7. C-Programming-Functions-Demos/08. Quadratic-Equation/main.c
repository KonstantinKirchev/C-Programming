#include <stdio.h>
#include <stdlib.h>

int calc_quadratic_roots(double roots[2], 
        double a, double b, double c);

int calc_quadratic_roots(double roots[2], 
        double a, double b, double c)
{
    double discriminant = (b * b) - (4 * a  * c);
    if (discriminant < 0)
    {
        // No roots, return 0
        return 0;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        roots[0] = root;
        return 1;
    }
    else 
    {
        roots[0] = (-b + sqrt(discriminant)) / 2 * a;
        roots[1] = (-b - sqrt(discriminant)) / 2 * a;
        return 2;
    }
}

int main(int argc, char** argv) 
{
    // 2x^2 + 3x -10 = 0
    double roots[2];
    int foundRoots = calc_quadratic_roots(roots, 2, 3, -10);
    if (foundRoots == 0)
    {
        printf("No solution.");
    }
    else if (foundRoots == 1)
    {
        printf("%.2f", roots[0]);
    }
    else
    {
        printf("%.2f %.2f", roots[0], roots[1]);
    }
    
    return (EXIT_SUCCESS);
}

