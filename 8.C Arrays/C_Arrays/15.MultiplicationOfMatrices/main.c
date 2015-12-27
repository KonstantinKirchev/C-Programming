#include <stdio.h>
#include <stdlib.h>
#include "../Functions/functions.c"

int main() {
    int row, col;
    printf("row = ");
    scanf("%d", &row);
    printf("col = ");
    scanf("%d", &col);
    
    int matrix1[row][col];
    int matrix2[col][row];
    int matrixProduct[row][row];
    
    int row1;
    for (row1 = 0; row1 < row; row1++) {
        int col1;
        for (col1 = 0; col1 < col; col1++) {
            scanf("%d", &matrix1[row1][col1]);
        }
    }

    int row2;
    for (row2 = 0; row2 < col; row2++) {
        int col2;
        for (col2 = 0; col2 < row; col2++) {
            scanf("%d", &matrix2[row2][col2]);
        }
    }
    
    int i;
    for (i = 0; i < row; i++) {
        int j;
        for (j = 0; j < row; j++) {
            int sum = 0;
            
            int l;
            for (l = 0; l < col; l++) {
                sum += matrix1[i][l] * matrix2[l][j];
            }
            matrixProduct[i][j] = sum;
        }
    }
    printf("\n");
    print_matrix(matrixProduct, row, row);
    
    return (EXIT_SUCCESS);
}

