#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[50];
    printf("enter the size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\ninserted element is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
     
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nafter sorting:\n");
      for(int i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
}