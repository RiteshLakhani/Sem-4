#include<stdio.h>
#include<time.h>

void main()
{
	int a,ans;
	clock_t start,end;
	
	printf("Enter Number :- ");
	scanf("%d",&a);
	
	
	start = clock();
	ans = sum(a);
	end = clock();
	
	double sec = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Ans: %lf",sec);
	printf("Ans : %d",ans);
}

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n + sum(n-1);
	}
}
