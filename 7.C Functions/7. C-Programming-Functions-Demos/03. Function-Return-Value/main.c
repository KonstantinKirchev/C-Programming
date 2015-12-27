#include <stdio.h>
#include <stdlib.h>

int plus_one(int n)
{
    n++;
    return n;
}

double calc_triangle_area(double a, double ha)
{
    double area = (a * ha) / 2;
    
    return area;
}

double power(double n, int p)
{
    int i;
    double result = 1;
    for (i = 0; i < p; i++)
    {
        result *= n;
    }
    
    return result;
}

double fahrenheit_to_celsius(double degreesF)
{
    double celsius = ((degreesF - 32) * 5) / 9;
    return celsius;
}

char get_sign(int num)
{
    if (num >= 0)
    {
        return '+';
    }
    
    return '-';
}

int main() 
{
    int result = plus_one(5);
    printf("%d\n", result);
    
    char sign = get_sign(-5);
    printf("Sign of %d is %c\n", -5, sign);
    
    printf("Celius: %.2f\n", fahrenheit_to_celsius(44));
    
    printf("%.2f^%d = %.2f\n", 3.0, 3, power(3.0, 3));
    
    double triangleArea = calc_triangle_area(3, 4);
    printf("Area: %.2f", triangleArea);
    
    return (EXIT_SUCCESS);
}





