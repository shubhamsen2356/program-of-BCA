#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k=1;
    printf("enter a number");
    scanf("%d",&n);

    while(k!=n)
    {
        if( k%2==1 &&  k%3==1 && k%4==1 && k%5==1 && k%6==1 && k%7 ==0)
        {
            printf("%d, ",k);
        }
        k++;
    }
    printf("nahi mili");
    
}