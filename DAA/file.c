#include<stdio.h>
void main()
{
	FILE *fp1 , *fp2 , *fp3;
	int i;
	
	fp1 = fopen("best.txt","w");
	fp2 = fopen("avg.txt","w");
	fp3 = fopen("worst.txt","w");
	
	for(i=1 ; i<=100000 ; i++)
	{
		fprintf(fp1,"%d \n",i);
		fprintf(fp2,"%d \n",rand());
		fprintf(fp3,"%d \n",100001-i);
	}
}
