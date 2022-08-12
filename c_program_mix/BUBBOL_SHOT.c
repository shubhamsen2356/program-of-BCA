#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n;
    printf("enter the size of array(MAX-100):"); 
    scanf("%d",&n);
    printf("enter the element:");
    for (int  i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
     
    }

    for(int  i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
             if(a[j]>a[j+1])
            {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("values in asendic order:");
    for(int i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
    
}