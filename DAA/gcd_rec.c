#include<stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b;
	
    printf("\n Enter a:- ");
    scanf("%d", &a);
	
    printf("\n Enter b:- ");
    scanf("%d", &b);

    printf("\n GCD of %d and %d is: %d\n", a, b, gcd(a, b));

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    if (a == b)
    {
        return a;
    }

    if (a > b)
    {
        return gcd(a - b, b);
    }
    else
    {
        return gcd(a, b - a);
    }
}

