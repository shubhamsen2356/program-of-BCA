#include "stdio.h"
#include "conio.h"
void main()
{
    int re=0;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int m=n;
    while (n!=0)
    {
       int  a = n%10;
       re= re+(a*a*a);
       n=n/10;
    }
    if (m==re)
    {
        printf("number is armstrong");

    }
    else
    {
        printf("not armstrong");
    }
    
    printf("\n\n%d",re);
}