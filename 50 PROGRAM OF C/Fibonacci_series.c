#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=0,b=1,c=0;
    printf("enter the number of element:\n");
    scanf("%d",&n);
    printf("series is:");
    for(int i=0;i<n;i++)
    {
        int a= b+c;
            b=c;
            c=a;
            
    printf("%d,",a);
    }
}