#include<stdio.h>
#include<conio.h>
void  main()
{
    int n,a,r=0;
    printf("enter the number that you want to reverce:");
    scanf("%d",&n);
    while (n!=0)
    {
        a=n%10;
        r=(r*10)+a;
        n=n/10;

    }
    printf("after reverce:\n%d",r);
    
}