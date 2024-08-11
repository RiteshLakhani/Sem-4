#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()
{
	int i,a,temp=1;
	clock_t start,end;
	
	printf("Enter Number:- ");
	scanf("%d",&a);
	
	start = clock();
	for(i=1;i<=a;i++)
	{
		temp=temp*i;
	}
	
	end = clock();
	
	double sec = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Ans:- %lf",sec);
	printf("Ans Of Factorial:- %d ",temp);	
}
