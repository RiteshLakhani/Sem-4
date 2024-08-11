#include<stdio.h>

int main(){
    int num_denominations, coin_list[100], use_these[100], i, owed;
    
    printf("\nEnter Number of Denominations: ");
    scanf("%d",&num_denominations);
    
    printf("\nEnter the Denominations in Descending Order: ");
    for(i = 0; i < num_denominations; i++)
    {
        scanf("%d",&coin_list[i]);
    }
    
    printf("Enter the amount owed: ");
    scanf("%d",&owed);
    
    for(i = 0; i < num_denominations; i++)
    {
        use_these[i] = owed / coin_list[i];
        owed %= coin_list[i];
    }
    
    printf("Answer: ");
    
    for(i = 0; i < num_denominations; i++)
    {
        printf("%dx%d\t", coin_list[i], use_these[i]);
    }

    return 0;
}

