#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int numbers[n];
    
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int length = sizeof(numbers) / sizeof(int);
    
    int j;
    int k = 0;
    int nums[length];
    for (j = length - 1; j >= 0; j--) {
        nums[k] = numbers[j];
        k++;
    }
    
    array_print(nums, length);


    return (EXIT_SUCCESS);
}

