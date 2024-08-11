#include <stdio.h>
#include <conio.h>
#include <time.h>

void myfun(int n);

int main()
{
    clock_t start, end;

    start = clock();
    myfun(1);
    end = clock();

    double sec = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Ans:- %lf", sec);
    return 0;
}

void myfun(int n)
{
    if (n == 51)
    {
        return;
    }

    printf(" %d ", n);
    myfun(n + 1);
//    getch();
}

