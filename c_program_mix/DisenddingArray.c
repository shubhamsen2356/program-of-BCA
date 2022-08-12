#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],j,k,l;
    printf("enter element in array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
        printf(" element in array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ",a[i]);
    }

    for(j=0;j<10;j++)
    {
        for(k=j+1;k<10;k++)
        {
            if(a[j]<a[k])
            {
                int temp= a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    printf("\nater sorting:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d, ",a[i]);
    }
    

    

}