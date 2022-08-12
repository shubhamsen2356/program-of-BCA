#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0;
    int a[5],b[5];
    printf("enter 5 element:");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    while (i!=5)
    {
        b[i]=a[i];
        i++;
    }
    printf("after copy array:\n");
    for (int  k = 0; k<5; k++)
    {
        printf("%d\n",b[k]);
    }
    
}