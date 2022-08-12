#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4],n;
    printf("please enter five number:");
    for (int i = 0; i < 5; i++)
    {
     scanf("%d",&a[i]);
    }

        printf("given number is:");
    for (int i = 0; i < 5; i++)
    {
     printf("%d, ",a[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        for (int k= j+1; k < 5; k++)
        {
            if(a[j]>a[k])
            {
                int temp = a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    printf(" \n\nsecond lagest number is:%d\n",a[3]);
    printf("second smallest number is:%d",a[1]);
    
}