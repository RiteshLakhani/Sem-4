#include<stdio.h>

void main()
{
	int n=0;
	
	printf("\n Enter an integer:- ");
	scanf("%d",&n);
	
	int count=0;
	
	count = myFun(n,0);
	
	printf("Number of digits:- %d",count);
}

int myFun(int n , int count)
{
	if(n==0)
	{
		return count;
	}
	
	n=n/10;
	
	return myFun(n,++count);
}
