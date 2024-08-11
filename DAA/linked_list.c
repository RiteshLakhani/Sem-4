#include<stdio.h>
#include<stdlib.h>

struct node{
    int no;
    struct node *next;
}*f=NULL,*r=NULL;

void insertFront(void);
void insertLast(void);
void insertPosition(void);
void delFront(void);
void delLast(void);
void delPostion(void);

int main()
{
    int ch;

    do{
        printf("\n 0 for Exit: ");
        printf("\n 1 for Insert At Front: ");
        printf("\n 2 for Insert At End: ");
        printf("\n 3 for Insert At Position: ");
        printf("\n 4 for Delete At Front: ");
        printf("\n 5 for Delete At End: ");
        printf("\n 6 for Delete At Position: ");

        printf("\n Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 0 :
                	return 0;
            case 1:
                insertFront();
                break;
            case 2:
                insertLast();
                break;
            case 3:
                insertPosition();
                break;
            case 4:
                //delFront();
                break;
            case 5:
                //delLast();
                break;
            case 6:
                //delPostion();
                break;
            default:
                printf("\n Enter Valid Number...");      
        }
    }while(ch!=0);

    return 0;
}

void insertFront()
{
    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    printf("\n Enter Value: ");
    scanf("%d",&n->no);

    if(r== NULL)
    {
        r=n;
        r->next=NULL;
    }
    else
    {
        n->next = f;
        f = n;
    }
}

void insertLast()
{
    struct node *n;

    n=(struct node *)malloc(sizeof(struct node));

    printf("\n Enter Value: ");
    scanf("%d",&n->no);

    if(f==NULL && r==NULL)
    {
        f=n;
        r=n;
        r->next=NULL;
    }
    else
    {
        r->next=n;
        r=n;
        r->next=NULL;
    }
}

void insertPosition()
{
    struct node *n,*temp;
    int position , count=1;

    n=(struct node *)malloc(sizeof(struct node));

    printf("\nEnter Value: ");
    scanf("%d",&n->no);

    printf("\nEnter Position: ");
    scanf("%d", &position);

    if(position == 1)
    {
        if(r== NULL)
        {   
            r=n;
            r->next=NULL;
        }
        else
        {
            n->next = f;
            f = n;
        }   
    }
    else
    {
        temp = f;
        while(count < position-1 && temp!=NULL)
        {
            temp = temp->next;
            count++;    
        }   
        
        if(temp==NULL)
        {
            printf("\n Position not Found");
        }
        else
        {
            n->next = temp->next;
            temp->next = n;
        }
    }
}

