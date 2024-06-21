#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols, i=0, j=0;
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];

    for( i=0; i<rows; i++)
    {
        for( j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int row_to_modify[rows];
    int col_to_modify[cols];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                row_to_modify[i] = 1;
                col_to_modify[j] = 1;
            }
        }
    }

    for (i = 0; i < rows; i++) {
        if (row_to_modify[i]) {
            for (j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (j = 0; j < cols; j++) {
        if (col_to_modify[j]) {
            for (i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
