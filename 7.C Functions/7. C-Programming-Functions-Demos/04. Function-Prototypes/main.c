#include <stdio.h>
#include <stdlib.h>

int arr_get_index(int *array, int length, int num);
int sum(int a, int b);

int main() 
{
    int arr[] = { 4, 5, 1, -6, 1, 1 };
    int size = sizeof(arr) / sizeof(int);
    
    int index = arr_get_index(arr, size, -5);
    if (index == -1)
    {
        printf("Number not found.\n");
    }
    else 
    {
        printf("Index is %d.", index);
    }
    
    return (EXIT_SUCCESS);
}

int sum(int a, int b)
{
    return a + b;
}

int arr_get_index(int *array, int length, int num)
{
    int index;
    for (index = 0; index < length; index++)
    {
        int currentNum = array[index];
        if (currentNum == num)
        {
            return index;
        }
    }
    
    return -1;
}