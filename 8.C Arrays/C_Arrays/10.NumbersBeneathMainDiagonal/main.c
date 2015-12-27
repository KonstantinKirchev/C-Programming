#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int matrix[n][n];
    int row;
    for (row = 0; row < n; row++) {
        int col;
        for (col = 0; col < n; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    
    int row1;
    for (row1 = 0; row1 < n; row1++) {
        int col1;
        for (col1 = 0; col1 < row1 + 1; col1++) {
            printf("%d ", matrix[row1][col1]);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

