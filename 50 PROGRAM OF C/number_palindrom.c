#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,r=0;
    printf("enter a number:");
    scanf("%d",&n);
    int m=n;
    while (n!=0)
    {
        a=n%10;
        r=(r*10)+a;
        n=n/10;
    }
      if(m==r)
        printf("number is palindrom");
    else
        printf("number is not palindrom");    
    
}