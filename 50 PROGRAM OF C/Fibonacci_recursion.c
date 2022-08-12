#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
    int n,i;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("series is:");
    for(i=1;i<=n;i++)
    printf("%d,",fib(i));
}

int fib(int n)
{
    if(n==1)
        return 1;
        if(n==2)
            return 1;
                else
                    return fib(n-1) + fib(n-2);
}