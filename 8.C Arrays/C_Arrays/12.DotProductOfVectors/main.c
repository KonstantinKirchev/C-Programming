#include <stdio.h>
#include <stdlib.h>
#include "../Functions/functions.c"

int main() {
    int n;
    printf("n = ");
    n = input_int();
    int nums1[n];
    int nums2[n];
    
    input_array(nums1, n);
    input_array(nums2, n);

    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += nums1[i] * nums2[i];
    }
    
    printf("%d", sum);

    return (EXIT_SUCCESS);
}

