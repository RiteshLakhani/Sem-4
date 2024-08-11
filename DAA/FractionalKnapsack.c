#include<stdio.h>

int main()
{
	int n,i,j,temp;
	printf("Enter length of array:");
	scanf("%d",&n);
	float weight[n];
	float value[n];
	float ratio[n];
	float capacity;
	float x[n];
	
	printf("Enter capacity of the knapsack:");
	scanf("%f",&capacity);
	
	for(i=0;i<n;i++){
		printf("Enter weight of %d item: ",i);
		scanf("%f",&weight[i]);
		printf("Enter value of %d item: ",i);
		scanf("%f",&value[i]);
		
		x[i] = 0.0;
		ratio[i] = value[i] / weight[i];
	}
	
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(ratio[i] < ratio[j]) {
				temp = ratio[j];
				ratio[j] = ratio[i];
				ratio[i] = temp;
				
				temp = weight[j];
				weight[j] = weight[i];
				weight[i] = temp;
				
				temp = value[j];
				value[j] = value[i];
				value[i] = temp;
			}
		}
	}
	
	float u = capacity;
	float tp = 0.0;
	
	for(i=0;i<n;i++) {
		if(weight[i] > u) {
			break;
		}
		else {
			x[i] = 1.0;
			tp += value[i];
			u -= weight[i];
		}
	}
	
	if(i<n) {
		x[i] = u / weight[i];
	}
	
	tp += x[i] * value[i];
	
	printf("\nWeight:\t");
	for(i=0;i<n;i++) {
		printf("Weight: %1.2f\t",weight[i]);
			printf("Value: %1.2f\t",value[i]);
				printf("Ratio: %1.2f\t",x[i]);
	}
	
	printf("\nMaximum Profit: %f",tp);
	
	return 0;
}

