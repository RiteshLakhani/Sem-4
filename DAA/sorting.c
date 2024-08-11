#include<stdio.h>
#include<time.h>
void main()
{
	int n,i,j;
	clock_t start,end;
	
	printf("Enter how many size of Array :- ");
	scanf("\n %d",&n);
	
	int arr[n];
	
	printf("\n Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		printf("\n Element %d: ",i+1);
		scanf("\n %d",&arr[i]);
	}
	
	printf("Original Array:- ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
	
	start = clock();
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	end  = clock();
		
	double sec = (double)(end-start)/CLOCKS_PER_SEC;
	
	printf("\n Time to solve Array:- %lf",sec);
	
	printf("\n Sorted Array:- ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}	
}
