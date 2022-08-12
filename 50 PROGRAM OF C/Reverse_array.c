#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],b[50];
    int size,l=0;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter the element in array:");
    for(int i=0;i<size;i++)
    scanf("%d, ",&a[i]);
    printf("\nelement is:\n");
    for(int i=0;i<size;i++)
    printf("%d, ",a[i]);

    for(int j=size-1;j>=0;j--,l++)
    {
        b[l]=a[j];
    }
    printf("\nafter reverse:\n");
     for(int i=0;i<size;i++)
    printf("%d, ",b[i]);

}