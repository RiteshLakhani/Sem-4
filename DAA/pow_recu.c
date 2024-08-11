#include<stdio.h>
#include<time.h>
int myFun(int n, int count);
int main(){
	int n = 0,p=0,i=0;
	clock_t start,end;
	
	printf("Enter number : ");
	scanf("%d",&n);
	printf("Enter power: ");
	scanf("%d",&p);
	
	start = clock();
	int ans = myFun(n,p);
	end = clock();
	
	printf("number of digits is : %d\n",ans);
	double time_taken = (double)(end -start)/CLOCKS_PER_SEC;
	printf("%lf",time_taken);
	return 0;
}
int myFun(int n,int count){
	if(count == 0){
		return 1;
	}
	return n*myFun(n,--count);
}
