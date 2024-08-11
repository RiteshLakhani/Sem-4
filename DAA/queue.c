#include <stdio.h>
#define size 5

struct queue {
    int que[size];
    int front, rear;
} q;

void insert(int element);
int del();
void display();

void main() {
    q.front = -1;
    q.rear = -1;
    int ch, element;

    do {
        printf("\nEnter 1 For Insert:- ");
        printf("\nEnter 2 For Delete:- ");
        printf("\nEnter 3 For Display:- ");
        printf("\nEnter 4 For Exit:- ");

        printf("\nEnter Your Choice:- ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (q.rear == size - 1) {
                    printf("\nQueue is Full");
                } else {
                    if (q.front == -1 && q.rear == -1) {
                        q.front++;
                        q.rear++;
                    } else {
                        q.rear++;
                    }
                    printf("\nEnter Element:- ");
                    scanf("%d", &element);
                    insert(element);
                }
                break;
            case 2:
                if (q.front == -1 && q.rear == -1) {
                    printf("\nQueue is Empty.");
                } else {
                    del();
                }
                break;
            case 3:
            		if (q.front == -1 && q.rear == -1) 
					{
        				printf("\nQueue is Empty.\n");
    				}
    				else
    				{
    					display();
					}
		           break;
        }
    } while (ch != 4);
}

void insert(int element) {
    q.que[q.rear] = element;
    printf("\nElement %d inserted successfully.\n", element);
}

int del() {
    int deleted_element;
    deleted_element = q.que[q.front];

    if (q.front == q.rear) {
        q.front = -1;
        q.rear = -1;
    } else {
        q.front++;
    }

    printf("\nDeleted Element: %d\n", deleted_element);
    return deleted_element;
}

void display() 
{
	int i;
        printf("\nQueue elements:\n");
        for(i = q.front; i <= q.rear; i++) 
		{
            printf("%d ", q.que[i]);
        }
        printf("\n");
}

