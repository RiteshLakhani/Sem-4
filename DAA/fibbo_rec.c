#include<stdio.h>
#include<conio.h>
int fibonacci(int n);
void main()
{
	int i,m=0,n;
	printf("\n Enter Length : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf(" %d ",fibonacci(m));
		m++;
	}
	getch();
}
int fibonacci(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
