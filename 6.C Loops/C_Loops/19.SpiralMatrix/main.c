#include <stdio.h>

/*
 * Problem 19.** Spiral Matrix
 * Write a program that reads from the console a positive integer number n
 * (1 ≤ n ≤ 20) and prints a matrix holding the numbers from 1 to n*n in the
 * form of square spiral like in the examples below. 
 */

typedef int     bool_t;
#define LF      0xA
#define true    0x1
#define false   0x0

int main() {
    
//    float           chNum;
//    
//    // INPUT
//    printf("Enter a positive integer [1-20] ");
//    fscanf(stdin, "%f", &chNum);
//    
//    if ( chNum < 1.0 || chNum > 20.0 )
//    {
//        printf("Invalid input. Exiting (-1)...\n");
//        return -1;
//    }
//
//    // LOGIC
//    printf("Generating %.0dx%.0d spiral matrix...\n", (int)chNum, (int)chNum);
//    
//    unsigned short  M[(int)chNum][(int)chNum];
//    unsigned short  index = 1;
//    unsigned char   direction = 4;
//    char            xPos = -1;
//    char            yPos = 0;
//    
//    float   j;
//    int     i;
//    for (j = chNum; j >= 1.0; j -= 0.5)
//    {
//        //printf("%.1f\t->%d\n", j, (int)j);
//        for (i = 0; i < (int)j; ++i)
//        {
//            //printf("yPos: %hhu\txPos: %hhu\n", yPos, xPos);
//            if      (direction == 4) xPos++;
//            else if (direction == 3) yPos++;
//            else if (direction == 2) xPos--;
//            else if (direction == 1) yPos--;
//            
//            M[yPos][xPos] = index++;
//        }
//        
//        if  (direction <= 1) direction = 4;
//        else                 direction--;
//    }
//      
//    // OUTPUT
//    int x, y;
//    for (y = 0; y < (int)chNum; y++)
//    {
//        printf("\t");
//        for (x = 0; x < (int)chNum; x++)
//        {
//            printf("%3d ", M[y][x]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    
//    return 0;
    
int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        int matrix[n][n];
        int i, j, row = 0, col = 0;
        int maxRow = n - 1, maxCol = n - 1;
        int maxChars = n * n;
        int currentNum = 1;
        
        do
        {
            for (i = col; i <= maxCol; i++)
            {
                matrix[row][i] = currentNum;
                currentNum++;

            }
        
            row++;
            for (i = row; i <= maxRow; i++)
            {
                matrix[i][maxCol] = currentNum;
                currentNum++;
            }
        
            maxCol--;
            for (i = maxCol; i >= col; i--)
            {
                matrix[maxRow][i] = currentNum;
                currentNum++;
            }

            maxRow--;
            for (i = maxRow; i >= row; i--)
            {
                matrix[i][col] = currentNum;
                currentNum++;
            }
            col++;
        }
        while (currentNum <= maxChars);
        
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d ", matrix[i][j]);
            }
            
            printf("\n");
        }
    }
    
    return 0;
}
