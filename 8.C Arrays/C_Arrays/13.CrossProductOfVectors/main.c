#include <stdio.h>
#include <stdlib.h>
#include "../Functions/functions.c"

int main() {
    int nums1[3];
    int nums2[3];
    int result[3];
    
    input_array(nums1, 3);
    input_array(nums2, 3);
    
    result[0] = (nums1[1] * nums2[2]) - (nums1[2] * nums2[1]);
    result[1] = (nums1[2] * nums2[0]) - (nums1[0] * nums2[2]);
    result[2] = (nums1[0] * nums2[1]) - (nums1[1] * nums2[0]);
    
    printf("[%d", result[0]);
    int i;
    for (i = 1; i < 3; i++) {
        printf(", %d", result[i]);
    }
    printf("]");

    return (EXIT_SUCCESS);
}

