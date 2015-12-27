#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, multiplier;
    printf("n = ");
    scanf("%d", &n);
    printf("multiplier = ");
    scanf("%d", &multiplier);
    int nums[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        nums[i] *= multiplier;
    }
    array_print(nums, n);
    
    return (EXIT_SUCCESS);
}

