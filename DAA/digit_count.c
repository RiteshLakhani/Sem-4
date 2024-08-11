#include<stdio.h>
void main()
{
	int count=0;
	long long n;
	
	printf("\n Enter an integer:- ");
	scanf("%lld",&n);
	
	do{
		n = n / 10;
		count++;
	}while(n!=0);
	
	printf("Number of Digits: %d",count);
}
