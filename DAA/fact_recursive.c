#include<stdio.h>
#include<conio.h>
#include<time.h>
int factorial();
void main()
{
	int num;
	clock_t start,end;
	
	printf("Enter Number :- ");
	scanf("%d",&num);
	
	start = clock();
	int ans = factorial(num);
	end = clock();
	
	double sec = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Ans:- %lf",sec);
	printf("Factorial of Number Is:- %d",ans);
	
}

int factorial(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
}
