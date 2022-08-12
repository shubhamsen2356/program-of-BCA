#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r=0,a;
    printf("enter number that you want to check:");
    scanf("%d",&n);
    int m=n;
    while (n!=0)
    {
        a=n%10;
        r=(r*10)+a;
        n=n/10;
    }
    printf("%d:",r);
    
    if(r==m){
        printf("number is palindrom");
    }
    else
    {
        printf("number is not palindrom");
    }
    




}