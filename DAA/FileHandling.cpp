/*#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
void bubbleSort(int a[], int n);
void heapSort(int a[],int n);

int main(){
	//FILE *f1=fopen("BestCase1000.txt","w");
	//FILE *f2=fopen("WorstCase1000.txt","w");
	//FILE *f3=fopen("AverageCase1000.txt","w");

	int n;
	int a[100000],i;
	clock_t start,end;
	
	FILE *fp;
	fp = fopen("AverageCase100.txt","r");
	printf("\nEnter Number of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
	
	start = clock();
	bubbleSort(a,n);
	end = clock();
	double cputime = (double)(end-start) / CLOCKS_PER_SEC;
	
	printf("\n cputime: %lf",cputime);
	
	//int i;
	//for(i=1;i<=1000;i++){
	//	fprintf(f1,"%d\n",i);
	//	fprintf(f2,"%d\n",1001-i);
	//	fprintf(f3,"%d\n",rand()%1000);
	//}
	
	//fclose(f1);
	//fclose(f2);
	//fclose(f3);
	return 0;
}

void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}*/
////-------------------------////


//Heap Sort//
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void heapify(int a[], int n, int i);
void heapSort(int a[], int n);


int main() {
    int n;
    int a[100000], i;
    clock_t start, end;

    FILE *fp;
    fp = fopen("AverageCase100.txt", "r");
    printf("\nEnter Number of elements:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        fscanf(fp, "%d", &a[i]);
    }

    start = clock();
    heapSort(a, n);
    end = clock();
    double cputime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\n cputime: %lf", cputime);

    fclose(fp);
    return 0;
}

void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) {
        largest = left;
    }

    if (right < n && a[right] > a[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
}*/
///--------------------------------///


//Merge Sort//
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void merge(int a[], int left, int mid, int right);
void mergeSort(int a[], int left, int right);

int main() {
    int n;
    int a[100000], i;
    clock_t start, end;

    FILE *fp;
    fp = fopen("AverageCase1000.txt", "r");
    printf("\nEnter Number of elements:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        fscanf(fp, "%d", &a[i]);
    }

    start = clock();
    mergeSort(a, 0, n - 1);
    end = clock();
    double cputime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\n cputime: %lf", cputime);
    
    for(i=0;i<n;i++){
    	printf("\n %d",a[i]);
	}

    fclose(fp);
    return 0;
}

void merge(int a[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        merge(a, left, mid, right);
    }
}*/
//-------------------------------------////


//Quick Sort//
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void quickSort(int a[], int lb, int up);
int quickSortPartition(int a[], int lb, int up);

int main() {
    int n;
    int a[100000], i;
    clock_t start, end;

    FILE *fp;
    fp = fopen("AverageCase500.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nEnter Number of elements:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        fscanf(fp, "%d", &a[i]);
    }

    start = clock();
    quickSort(a, 0, n - 1);
    end = clock();
    double cputime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\n cputime: %lf", cputime);

    for (i = 0; i < n; i++) {
        printf("\n %d", a[i]);
    }

    fclose(fp);
    return 0;
}

void quickSort(int a[], int lb, int up) {
    if (lb < up) {
        int pivotIndex = quickSortPartition(a, lb, up);
        quickSort(a, lb, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, up);
    }
}

int quickSortPartition(int a[], int lb, int up) {
    int pivot = a[lb];
    int i = lb;
    int j, temp;

    for (j = lb + 1; j <= up; j++) {
        if (a[j] < pivot)
		{
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i];
    a[i] = a[lb];
    a[lb] = temp;

    return i;
}*/

