#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[50],value,index;
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
   
    for(int i=0;i<n;i++)
    {
        value=a[i];
        index = i;
        while(index>0 && a[index-1]>value)
        {
            a[index]= a[index-1];
            index--;
        }
        a[index]=value;
    }



    printf("\nafter sorting:\n");
      for(int i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
}