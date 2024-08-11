#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter Array Size:- ");
	scanf("\n %d",&n);
	
	int arr[n];
	
	printf("Enter the Array Element:- ");
	for(i=0;i<n;i++)
	{
		printf("\n Element %d: ",i+1);
		scanf("\n %d",&arr[i]);
	}
	
	printf("The Array elements are: ");
	
	printArray(arr,n,0);
	
	return 0;
}

void printArray(int arr[], int size, int index)
{
	if(index==size)
	{
		return;
	}
	
	printf("\n %d",arr[index]);
	
	printArray(arr,size,index+1);
}
