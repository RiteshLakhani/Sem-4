#include<stdio.h>
void main()
{
	int i,n;
	
	printf("\n Enter Size of Array:- ");
	scanf("\n %d",&n);
	
	int arr[n];
	
	printf("\n Enter %d element ",n);
	for(i=0;i<n;i++)
	{
		printf("\n Element %d:",i+1);
		scanf("\n %d",&arr[i]);
	}
	
	printf("Original Array:- ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
}
