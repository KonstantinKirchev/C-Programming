#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    printf("row = ");
    scanf("%d", &row);
    printf("col = ");
    scanf("%d", &col);
    
    int matrix1[row][col];
    int matrix2[row][col];
    int matrixSum[row][col];
    
    int row1;
    for (row1 = 0; row1 < row; row1++) {
        int col1;
        for (col1 = 0; col1 < col; col1++) {
            scanf("%d", &matrix1[row1][col1]);
        }
    }

    int row2;
    for (row2 = 0; row2 < row; row2++) {
        int col2;
        for (col2 = 0; col2 < col; col2++) {
            scanf("%d", &matrix2[row2][col2]);
        }
    }
    
    int row3;
    for (row3 = 0; row3 < row; row3++) {
        int col3;
        for (col3 = 0; col3 < col; col3++) {
            matrixSum[row3][col3] = matrix1[row3][col3] + matrix2[row3][col3];
        }
    }
    printf("\n");
    int row4;
    for (row4 = 0; row4 < row; row4++) {
        int col4;
        for (col4 = 0; col4 < col; col4++) {
            printf("%d ", matrixSum[row4][col4]);
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

