#include<stdio.h>
void main()
{
	int base,exp,ans=1;
	
	printf("Enter Base Number:- ");
	scanf("%d",&base);
	
	printf("Enter Exp:- ");
	scanf("%d",&exp);
	
	while(exp!=0)
	{
		ans = ans * base;
		exp--;
	}
	
	printf("Ans: %d",ans);
}
