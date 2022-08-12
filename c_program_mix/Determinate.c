#include<stdio.h>
#include <conio.h>
void main()
{
    int a[3][3];
    int determinate;
    printf("enter element in fist matrix");
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("%4d",a[i][j]);
        }printf("\n");
    }
    determinate=  a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))+a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]))  ;

    printf("determinate is:%d",determinate);
}