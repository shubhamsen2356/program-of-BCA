#include "stdio.h"
#include "conio.h"
int fib(int);

int main()
{
    int n;
    printf("enter the element number of siries:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d,",fib(i));
    }
    return 0;
}

int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return(fib(n-1)+fib(n-2));
    
}