#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()
{
	int i,a,sum=0;
	clock_t start,end;
	
	printf("Enter Number To Sum:- ");
	scanf("%d",&a);
	
	start = clock();
	for(i=0;i<=a;i++)
	{
		sum = sum + i;
	}
	end = clock();
	
	double sec = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Ans:- %lf",sec);
	printf("Ans:-%d",sum);
}
