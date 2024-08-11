#include<stdio.h>

int main()
{
    int rows, col,i,j;
    
    printf("Enter Number of Rows in Matrix:- ");
    scanf("%d", &rows);
    
    printf("Enter Number of Columns in Matrix:- ");
    scanf("%d", &col);
    
    int matrix[rows][col];
    int transpose[col][rows];
    
    printf("Enter Element of the Matrix:-\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter Element of the Position (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i=0; i<col; i++)
    {
        for(j=0; j<rows; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    
    printf("\nOriginal Matrix:-\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose Of Matrix:-\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

