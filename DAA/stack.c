#include<stdio.h>
#define size 5

struct stack{
	int stk[size];
	int top;
}s;

void push(int num);
int pop();
void peep();
void change();
void display();

void main()
{
	s.top=-1;
	int ch,num;
	
	do{
	
		printf("\nEnter 1 For Push:-");
		printf("\nEnter 2 For PoP:-");
		printf("\nEnter 3 For Peep:- ");
		printf("\nEnter 4 For Change:- ");
		printf("\nEnter 5 For Display:- ");
		printf("\nEnter 6 For Exit:- ");
	
		printf("\n Enter Your choice:-");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
					if(s.top>=size-1)
					{
						printf("\n Stack Overflow");
					}
					else
					{
						printf("\nEnter Value:- ");
						scanf("%d",&num);
						push(num);
					}
					break;
			case 2:
					if(s.top==-1)
					{
						printf("\n Stack Is Empty");
					}	
					else
					{
						int poppedValue = pop();
						printf("\nPopped Value:- %d\n",poppedValue);
					}
					break;
			case 3:
					if(s.top==-1)
					{
						printf("\n Stack is Empty");
					}
					else
					{
						peep();
					}
					break;
			case 4:
					if(s.top==-1)
					{
						printf("\n Stack is Empty");
					}
					else
					{
						change();
					}
					break;
			case 5:
					if(s.top==-1)
					{
						printf("\nStack is Empty");
					}
					else
					{
						display();
					}
					break;
			default:
					return 0;
		}
	}while(ch!=6);
	
}

void push(int num)
{
	s.stk[++s.top]=num;
}

int pop()
{
	return s.stk[s.top--];
}

void peep()
{
	printf("Top Element:-%d",s.stk[s.top]);
}

void change() 
{
    int index;
    printf("\nEnter the index to change (0 to %d): ", s.top);
    scanf("%d", &index);

    if (index < 0 || index > s.top) {
        printf("\nInvalid index. Please enter a valid index.\n");
        return;
    }

    printf("\nEnter the new value: ");
    scanf("%d", &s.stk[index]);
    
}

void display()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("%d",s.stk[i]);
		printf("\n");
	}
}
