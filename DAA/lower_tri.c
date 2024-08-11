#include<stdio.h>

void main()
{
	int rows, col,i,j,sum=0;
    
    printf("Enter Number of Rows in Matrix:- ");
    scanf("%d", &rows);
    
    printf("Enter Number of Columns in Matrix:- ");
    scanf("%d", &col);
    
    int matrix[rows][col];
    
    
    printf("Enter Element of the Matrix:-\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter Element of the Position (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
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
    
    for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			if(i >= j){
				printf("%d \t",matrix[i][j]);
			}
		}
		printf("\n");
	}
	

		
}
