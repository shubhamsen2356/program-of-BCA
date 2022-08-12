#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,max,l;
    printf("enter any two number:");
    scanf("%d%d",&n,&m);
    if(n>m)
        max=n;
    else
        max=m;
    // while(1)
    // {
    //     if(max%n==0 && max%m==0)
    //     {
    //         printf("lcm of both number is:%d",max);
    //         break;
    //     }
    //     ++max;
    // }

    for( l=max;l>=1;l--)
        if(n%l==0 && m%l==0)
        break;
       printf("lcm :%d",l);  
    
}