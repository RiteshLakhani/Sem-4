#include<stdio.h>
int main(){
	int n=0,m=0;
	printf("Enter rows of matrix : ");
	scanf("%d",&n);
	printf("Enter columns of matrix : ");
	scanf("%d",&m);
	int arr[n][m];
	int i =0,j=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter Number for (%d,%d): ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	int max = 0;
	int x=0,y=0;
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int min = arr[i][j];
            int xindex = i, yindex = j;

            for (x = i; x < n; x++) {
                for (y = (x == i ? j + 1 : 0); y < m; y++) {
                    if (min > arr[x][y]) {
                        min = arr[x][y];
                        xindex = x;
                        yindex = y;
                    }
                }
            }

            int temp = arr[i][j];
            arr[i][j] = min;
            arr[xindex][yindex] = temp;
        }
    }
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
