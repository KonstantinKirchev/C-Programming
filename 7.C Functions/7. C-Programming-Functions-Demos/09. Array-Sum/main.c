#include <stdio.h>
#include <stdlib.h>

double arr_sum(double arr[], int size, int *error);

double arr_sum(double arr[], int size, int *error)
{
    // Set error by default to 0 (error code for "success")
    *error = 0;
    if (arr == NULL)
    {
        // Set error to 1 (error code for "array is empty")
        *error = 1;
        return 0;
    }
    
    int i;
    double sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}

int main() 
{

    double arr[] = { 2.5, 3, 1, -3 };
    int size = sizeof(arr) / sizeof(double);
    int error;
    
    double sum = arr_sum(arr, size, &error);
    if (error == 0)
    {
        printf("Sum: %.2f", sum);
    }
    else if (error == 1)
    {
        printf("Array is null");
    }
     
    return (EXIT_SUCCESS);
}

