#include <stdio.h>

void bubbleSort(int arr[], int n);

int main() {
    int ch, n, i;
    
    printf("\n Enter The Number of Element in Array:- ");
    scanf("%d", &n);
 	
	int arr[n];
	
    do {
        printf("\nEnter 1 for Bubble sort: ");
        printf("\nEnter 2 for Insertetion Sort: ");
        printf("\nEnter 3 for Selection Sort: ");
        printf("\nEnter 4 for Heap Sort: ");

        printf("\nEnter Your choice:-");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
            	printf("\nEnter Element for Bubble Sort:- ");
                for (i = 0; i < n; i++) {
                    scanf("\n %d", &arr[i]);
                }

                bubbleSort(arr, n);

                printf("\nSorted Array:- ");
                for (i = 0; i < n; i++) {
                    printf("\n %d", arr[i]);
                }
                printf("\n");

                break;
            case 2:
            	printf("\nEnter The Element for Insertion Sort: \n");
            	for(i=0;i<n;i++){
            		scanf("\n %d",&arr[i]);
				}
               	
               	insertionSort(arr,n);
               	
               	printf("\nSorted Array Using Insrtion Sort:-");
               	for(i=0;i<n;i++){
               		printf("\n %d",arr[i]);
				   }
				printf("\n");
				
                break;

            case 3:
            	//Selection Sort--
                break;
        	
        	case 4:
        		//Heap Sort--
        		break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (ch != 3);

    return 0;
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key = arr[i];
		j = i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}
