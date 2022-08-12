#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],transepose[10][10];
    printf("enter the element of matrix");
    for(int i=0;i<3;i++)
    {
        for (size_t j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is :\n");
     for(int i=0;i<3;i++)
    {
        for (size_t j = 0; j <3; j++)
        {
            printf("%4d",a[i][j]);
        }printf("\n");
    }

    for(int i=0;i<3;i++)
    {
        for (size_t j = 0; j <3; j++)
        {
                transepose[j][i]=a[i][j];
        }
    }
    
    printf("\n\n");
     printf("matrix is :\n");
     for(int i=0;i<3;i++)
    {
        for (size_t j = 0; j <3; j++)
        {
            printf("%4d",transepose[i][j]);
        }printf("\n");
    }

         



}