#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()
{
	int i;
	clock_t start,end;
	
	start = clock();
	for(i=1;i<=50;i++)
	{
		printf(" %d ", i);
	}
	end = clock();
	
	double sec = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Ans:- %lf",sec);
	getch();
}
